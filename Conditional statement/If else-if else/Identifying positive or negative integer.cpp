#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter an integer number : ";
    cin>>x;
    if(x>0)
    {
        cout<<"The number is positive."<<endl;
    }
    else if(x<0)
    {
        cout<<"The number is negative."<<endl;
    }
    else
    {
        cout<<"The number is zero."<<endl;
    }
    return 0;
}
