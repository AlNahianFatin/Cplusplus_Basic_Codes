#include<iostream>
using namespace std;
void fibo (int num)
{
    int a=0,b=1,c=0;
    cout<<"0 ";
    for(int i=0; i<num-1; i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<a<<" ";
    }
}
int main()
{
    int num;
    cout<<"Enter an integer : ";
    cin>>num;
    fibo (num);
    return 0;
}
