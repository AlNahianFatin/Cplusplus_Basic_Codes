#include<iostream>
using namespace std;

void display (int a=10, int b=20)
{
    cout<<a<<endl;
    cout<<b<<endl<<endl;
}

int main()
{
    display ();
    display (15);
    display (15,25);
    return 0;
}
