#include<iostream>
using namespace std;
int main()
{
    int num,a=1,b=1,c=0,sum=0;
    cout<<"Enter an integer : ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        sum=sum+a;
        c=a+b;
        a=b;
        b=c;
    }
    cout<<"The sum is "<<sum;
    return 0;
}
