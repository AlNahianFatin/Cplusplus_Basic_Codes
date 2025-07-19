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

void BFS(int G[][7], int start, int n)
{
    int i = start, j;
    MyQueue Queue(7);
    int visited[7] = {0};

    cout << i << " ";
    visited[i] = 1;
    Queue.enqueue(i);

    while (!Queue.isEmpty())
    {
        i = Queue.getFront();
        Queue.dequeue();
        for (j = 1; j < n; j++)
        {
            if (G[i][j] == 1 && visited[j] == 0)
            {
                cout << j << " ";
                visited[j] = 1;
                Queue.enqueue(j);
            }
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

    cout<<"BFS starting with 4 : ";
    BFS(G, 4, 7);
    cout << endl;

    return 0;
}

