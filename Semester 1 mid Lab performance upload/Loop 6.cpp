#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter an integer : ";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum is "<<sum;
    return 0;
}
