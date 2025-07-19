#include <iostream>
using namespace std;

#define I INT_MAX

void addEdge(int** adj, int u, int v, int w)
{
    adj[u][v] = w;
}

int minDistance(int dist[], int visited[], int V)
{
    int minDist = I, minIndex = -1;
    for (int v = 0; v < V; v++)
    {
        if (visited[v] == 0 && dist[v] < minDist)
        {
            minDist = dist[v];
            minIndex = v;
        }
    }
    return minIndex;
}

void Dijkstra(int** adj, int src, int V)
{
    int* dist = new int[V];
    int* visited = new int[V];

    for (int i = 0; i < V; i++)
    {
        dist[i] = I;
        visited[i] = 0;
    }
    dist[src] = 0;

    for (int i = 0; i < V - 1; i++)
    {
        int u = minDistance(dist, visited, V);
        visited[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (visited[v] == 0 && adj[u][v] != I && dist[u] != I &&
                    (dist[u] + adj[u][v]) < dist[v])
            {
                dist[v] = dist[u] + adj[u][v];
            }
        }
    }

    cout << "{ ";
    for (int i = 0; i < V; i++)
    {
        cout << i << ": ";
        if (dist[i] == I)
            cout << -1;
        else
            cout << dist[i];
        if (i < V - 1)
            cout << ", ";
    }
    cout << " }" << endl;
}

int main()
{
    int V = 6;

    int** adj = new int*[V];
    for (int i = 0; i < V; i++)
    {
        adj[i] = new int[V];
        for (int j = 0; j < V; j++)
        {
            if (i == j)
            {
                adj[i][j] = 0;
            }
            else
            {
                adj[i][j] = I;
            }
        }
    }

    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 2, 15);
    addEdge(adj, 1, 3, 12);
    addEdge(adj, 2, 3, 10);
    addEdge(adj, 1, 4, 15);
    addEdge(adj, 2, 5, 20);
    addEdge(adj, 1, 2, 3);
    addEdge(adj, 4, 5, 13);
    addEdge(adj, 3, 4, 11);

    Dijkstra(adj, 0, V);

    return 0;
}
