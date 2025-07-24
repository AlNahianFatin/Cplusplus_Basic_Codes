#include<iostream>
using namespace std;
int main()
{
    int year[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter year "<<i+1<<" : ";
        cin>>year[i];
    }
    for(int i=0;i<5;i++)
    {
        if( ( year[i]%4==0 && year[i]%100!=0 ) || ( year[i]%400==0 ) )
        {
            cout<<year[i]<<" is leap year."<<endl;
        }
        else
        {
            continue;
        }
    }
    return 0;
}
