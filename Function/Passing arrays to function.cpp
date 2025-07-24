#include<iostream>
using namespace std;

void displayArray (int num[])
{
    for(int i=0; i<5; i++)
    {
        cout<<num[i]<<" ";
    }
}

int main()
{
    int number[] = {10, 20, 30, 40, 50};
    displayArray(number);
    return 0;
}
