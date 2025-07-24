#include <iostream>
using namespace std;

class MyStack
{
private:
    int *Stack;
    int Top;
    int MaxSize;

public:

    MyStack(int size)
    {
        MaxSize = size;
        Stack = new int[MaxSize];
        Top = 0;
    }

    ~MyStack()
    {
        delete[] Stack;
    }


    bool isEmpty()
    {
        return (Top == 0);
    }


    bool isFull()
    {
        return (Top == MaxSize - 1);
    }


    bool push(int Element)
    {
        if (isFull())
        {
            cout << "Stack Overflow: Cannot push more elements.\n";
            return false;
        }
        Stack[Top++] = Element;
        cout << Element << " pushed into stack.\n";
        return true;
    }

    bool pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow: Cannot pop from an empty stack.\n";
            return false;
        }
        cout << Stack[--Top] << " popped from stack.\n";
        return true;
    }

    bool topElement()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.\n";
            return false;
        }
        cout << "Top element of stack: " << Stack[Top] << endl;
        return true;
    }

    void show()
    {
        if (isEmpty())
        {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i < Top; i++)
        {
            cout << Stack[i] << " ";
        }
        cout << endl;
    }

    void resize(int size)
    {
        MaxSize = size;
        int *temp = new int[MaxSize];
        for (int i = 0; i <= Top; i++)
        {
            temp[i] = Stack[i];
        }
        delete[] Stack;
        Stack = temp;
        cout<<"Stack sized increased to "<<MaxSize<<endl;
    }
};

int main()
{
    MyStack stack(5);

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    stack.show();

    stack.resize(10);

    stack.push(60);
    stack.show();

    stack.pop();
    stack.pop();
    stack.show();

    stack.topElement();


    return 0;
}


