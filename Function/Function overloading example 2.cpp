#include<iostream>
using namespace std;

void sum (double x, int y)
{
    cout<<x+y<<endl;
}

void sum (double x, double y)
{
    cout<<x+y;
}

int main()
{
    sum(10.325, 2);
    sum(10, 50);
    return 0;
}
