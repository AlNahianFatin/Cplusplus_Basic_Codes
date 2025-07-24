#include <iostream>
using namespace std;

class MyQueue
{
private:
    int *Queue;
    int MaxSize;
    int front, rear;

public:
    MyQueue(int size)
    {
        MaxSize = size;
        Queue = new int[MaxSize];
        front = -1, rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    bool isFull()
    {
        return (rear == MaxSize - 1);
    }

    bool enqueue(int element)
    {
        if (isFull())
        {
            return false;
        }
        else if (isEmpty())
        {
            rear = 0;
            Queue[rear] = element;
            front = 0;
            return true;
        }
        else
        {
            rear++;
            Queue[rear] = element;
            return true;
        }
    }

    bool dequeue()
    {
        if (isEmpty())
        {
            return false;
        }
        else if (front == rear)
        {
            front = -1;
            rear = -1;
            return true;
        }
        else
        {
            front++;
            return true;
        }
    }


    int getFront()
    {
        if (!isEmpty())
        {
            return Queue[front];
        }
        return -1;
    }
};


void DFS(int G[][7], int start, int n, int visited[])
{
    if(visited[start]==0)
    {
        cout << start << " ";
        visited[start] = 1;
        for(int j = 1; j < n; j++)
        {
            if(G[start][j] == 1 && visited[j] == 0)
                DFS(G, j, n, visited);
        }
    }
}

int main()
{
    int G[7][7] =
    {
        {0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 1, 0, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}
    };

    int visited[7] = {0};
    cout<<"DFS starting with 4 : ";
    DFS(G, 4, 7, visited);
    cout << endl;

    return 0;
}
