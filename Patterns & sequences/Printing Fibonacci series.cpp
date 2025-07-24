#include<iostream>
using namespace std;
int main()
{
    int num,a=0,b=1,c=0;
    cout<<"Enter an integer : ";
    cin>>num;
    cout<<"0 ";
    for(int i=0; i<num-1; i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<a<<" ";
    }
    return 0;
}

