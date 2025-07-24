#include<iostream>
using namespace std;
int x=10;
void display()
{
    cout<<"Inside display, x = "<<x<<endl;
}
void confused()
{
    cout<<"Inside confused, x = "<<x<<endl;
}
int main()
{
    confused();
     x=20;
    cout<<"Inside main, x = "<<x<<endl;
    display();
    confused();
    return 0;
}
