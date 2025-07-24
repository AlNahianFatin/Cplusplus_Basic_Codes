#include<iostream>
using namespace std;
int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter positive integer number "<<i+1<<" : ";
        cin>>num[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=2;j<num[i];j++)
        {
            if(num[i]%j==0)
            {
                cout<<num[i]<<" is not a prime number."<<endl;
                continue;
            }
            else if(num[i]%j!=0)
            {
                cout<<num[i]<<" is not a prime number."<<endl;
                break;
            }
        }
    }
    return 0;
}
