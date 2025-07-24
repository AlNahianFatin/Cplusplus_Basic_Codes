#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
    }
    cout<<"The sum is = "<<sum;
    return 0;
}
