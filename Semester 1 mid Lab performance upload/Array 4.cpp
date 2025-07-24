#include<iostream>
using namespace std;
int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter integer number "<<i+1<<" : ";
        cin>>num[i];
    }
    for(int i=0;i<5;i++)
    {
        if(num[i]%2==0)
        {
            cout<<"New modified value for number "<<i+1<<" is 0"<<endl;
        }
        else
        {
            cout<<"New modified value for number "<<i+1<<" is 1"<<endl;;
        }
    }
    return 0;
}
