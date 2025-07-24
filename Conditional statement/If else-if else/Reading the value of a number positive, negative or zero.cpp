#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the value of an integer : ";
    cin>>m;
    if(m>0)
    {
        n=1;
        cout<<"the value of n is: "<<n<<endl;
    }
    else if(m==0)
    {
        n=0;
        cout<<"the value of n is: "<<n<<endl;
    }
    else
    {
        n=-1;
        cout<<"the value of n is: "<<n<<endl;
    }
    return 0;
}
