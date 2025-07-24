#include<iostream>
using namespace std;
int main()
{
    int num,a=0,b=1,c=0,d=0,e=1,f=0,sum=0;
    cout<<"Enter an integer : ";
    cin>>num;
    cout<<"The Fibonacci series is = "<<a<<" ";
    for(int i=0; i<num-1; i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<a<<" ";
    }
    for(int i=0; i<num; i++)
    {
        sum=sum+d;
        f=d+e;
        d=e;
        e=f;
    }
    cout<<endl;
    cout<<"The sum of "<<num<<" numbers is "<<sum<<".";
    return 0;
}

