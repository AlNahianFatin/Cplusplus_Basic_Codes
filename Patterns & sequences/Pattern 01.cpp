#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
        }
        cout<<endl;
    }
}

