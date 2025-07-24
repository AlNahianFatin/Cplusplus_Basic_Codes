#include<bits/stdc++.h>
using namespace std;

#define V 5

int selectMinVertex(int value[], bool setMST[]) {
    int minimum = INT_MAX;
    int vertex;
    for (int i = 0; i < V; ++i) {
        if (!setMST[i] && value[i] < minimum) {
            vertex = i;
            minimum = value[i];
        }
    }
    return vertex;
}

void findMST(int G[V][V])
{
    int parent[V];
    int value[V];
    bool setMST[V];

    for (int i = 0; i < V; ++i)
    {
        value[i] = INT_MAX;
        setMST[i] = false;
    }

    parent[0] = -1;
    value[0] = 0;

    for(int i = 0; i < V - 1; ++i)
    {
        int U = selectMinVertex(value,setMST);
        setMST[U] = true;

        for(int j = 0; j < V; ++j)
        {
            if(G[U][j] != 0 && setMST[j] == false && G[U][j] < value[j])
            {
                value[j] = G[U][j];
                parent[j] = U;
            }
        }
    }

    int sum = 0;
    cout << "Minimum Spanning Tree Edges: " << endl;
    for(int i = 1; i < V; ++i)
    {
        cout << "Edge: (" << parent[i] << ", " << i << ") Weight: " << G[parent[i]][i] << endl;
        sum += G[parent[i]][i];
    }
    cout << "Total weight of MST: " << sum << endl;
}

int main()
{
    int G[V][V] = {{0, 2, 0, 6, 0},
                    {0, 0, 3, 8, 5},
                    {0, 0, 0, 0, 7},
                    {0, 0, 0, 0, 9},
                    {0, 0, 0, 0, 0}};
    findMST(G);

    return 0;
}
