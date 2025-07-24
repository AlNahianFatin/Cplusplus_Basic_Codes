#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
    {
         return 1;
    }
    else
    {
         return n*fact(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n)<<"."<<endl;
    return 0;
}
