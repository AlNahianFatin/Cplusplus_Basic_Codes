#include<iostream>
using namespace std;

void Odd(int num1, int num2)
{
    for(int i=num1; i <= num2; i++)
    {
        if(i % 2 != 0)
            cout << i << " ";
    }
}

int main()
{
    int num1, num2;
    cout << "Starting value : ";
    cin >> num1;

    cout << "Ending value : ";
    cin >> num2;

    Odd(num1, num2);
}
