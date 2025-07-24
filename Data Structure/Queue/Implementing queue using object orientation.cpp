#include<iostream>
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
        return (front==-1 && rear==-1);
    }
    bool isFull()
    {
        return (rear == MaxSize-1);
    }
    bool enqueue(int element)
    {
        if(isFull())
        {
            cout << "Queue Full: Cannot enqueue more elements.\n";
            return false;
        }
        else if(isEmpty())
        {
            rear = 0;
            Queue[rear] = element;
            front = 0;
            cout << element << " enqueued into queue.\n";
            return true;
        }
        else
        {
            rear++;
            Queue[rear] = element;
            cout << element << " enqueued into queue.\n";
            return true;
        }
    }
    bool dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue Empty: Cannot dequeue from an empty queue.\n";
            return false;
        }
        else if(front == rear)
        {
            cout << Queue[front++] << " dequeued from queue.\n";
            front = -1;
            rear = -1;
            return true;
        }
        else
        {
            cout << Queue[front++] << " dequeued from queue.\n";
            return true;
        }
    }
    int getFrontElement()
    {
        if(isEmpty())
        {
            return -999999999;
        }
        else
        {
            return Queue[front];
        }

    }
    void show()
    {
        if(isEmpty())
        {
            cout<<"Cannot print an empty queue."<<endl;
        }
        else
        {
            for(int i=front; i<=rear; i++)
            {
                cout<<Queue[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    MyQueue Queue(5);

    Queue.dequeue();
    Queue.show();

    Queue.enqueue(4);
    Queue.enqueue(10);
    Queue.enqueue(11);
    Queue.enqueue(123);
    Queue.enqueue(1000);
    Queue.enqueue(45);
    Queue.show();

    Queue.dequeue();
    Queue.dequeue();
    Queue.getFrontElement();

    return 0;
}

