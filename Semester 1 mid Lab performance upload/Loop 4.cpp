#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter an integer number : ";
    cin>>num;
    if(num%2==0)
    {
        for(int i=2;i<=num;i=i+2)
        {
            sum=sum+i;
        }
    }
    else
    {
        for(int i=2;i<=num-1;i=i+2)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}
