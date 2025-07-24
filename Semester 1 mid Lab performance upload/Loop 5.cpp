#include<iostream>
using namespace std;
int main ()
{
    int num,sum=0;
    cout<<"Enter a number : ";
    cin>>num;
    if(num%3==0)
    {
        for(int i=3;i<=num;i=i+3)
        {
            sum=sum+i;
        }
    }
    else if((num-2)%2==0)
    {
        for(int i=3;i<=num;i=i+3)
        {
            sum=sum+i;
        }
    }
    else
    {
        for(int i=3;i<=num;i=i+3)
        {
            sum=sum+i;
        }
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}
