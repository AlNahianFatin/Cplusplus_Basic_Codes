#include<iostream>
using namespace std;
int main()
{
    int num[3];
    cout<<"Enter 3 integer numbers : ";
    for(int i=0;i<3;i++)
    {
        cin>>num[i];
    }
    int lrg=num[0];
    for(int i=1;i<3;i++)
    {
        if(lrg<num[i])
        {
            lrg=num[i];
        }
    }
    cout<<"The largest number is : "<<lrg<<endl;
    if(lrg%2==0)
    {
        cout<<"The largest number is even."<<endl;
    }
    else
    {
        cout<<"The largest number is odd."<<endl;
    }
    return 0;
}
