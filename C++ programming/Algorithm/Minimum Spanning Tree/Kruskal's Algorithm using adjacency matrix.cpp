#include <iostream>
using namespace std;

#define MAX_VERTICES 100

int make_set[MAX_VERTICES];

void Union(int u, int v)
{
    if (make_set[u] < make_set[v])
    {
        make_set[u] += make_set[v];
        make_set[v] = u;
    }
    else
    {
        make_set[v] += make_set[u];
        make_set[u] = v;
    }
}

int Find_set(int u)
{
    int x = u, v = 0;

    while (make_set[x] >= 0)
        x = make_set[x];

    while (u != x)
    {
        v = make_set[u];
        make_set[u] = x;
        u = v;
    }

    return x;
}

void MST_KRUSKAL(int edges[][3], int n, int e)
{
    int included[MAX_VERTICES] = {0};
    int t[2][MAX_VERTICES];
    int i = 0, j, k, u, v;
    int totalCost = 0;

    for (int i = 0; i < n; i++)
        make_set[i] = -1;

    while (i < n - 1)
    {
        int min = INT_MAX;
        k = -1;
        for (j = 0; j < e; j++)
        {
            if (included[j] == 0 && edges[j][2] < min)
            {
                min = edges[j][2];
                u = edges[j][0];
                v = edges[j][1];
                k = j;
            }
        }

        if (k != -1 && Find_set(u) != Find_set(v))
        {
            t[0][i] = u;
            t[1][i] = v;
            totalCost += edges[k][2];
            Union(Find_set(u), Find_set(v));
            i++;
        }
        if (k != -1)
            included[k] = 1;
    }

    cout << "Minimum cost: " << totalCost << endl;
    cout << "Bridges used: ";
    for (i = 0; i < n - 1; i++)
        cout << "(" << t[0][i] << ", " << t[1][i] << ") ";
    cout << endl;
}

int main()
{
    int edges[5][3] = {{0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    int n = 4, e = 5;

    MST_KRUSKAL(edges, n, e);

    return 0;
}
