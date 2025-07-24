#include <iostream>
using namespace std;
int gcd (int u, int v)
{
    int temp;
    while ( v != 0 )
    {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

int main (void)
{
    int n1, n2;
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;
    int result=gcd (n1, n2);
    cout<<"GCD of the numbers "<<n1<<" & "<<n2<<" using variable: "<<result<<endl;
    cout<<"GCD of the numbers "<<n1<<" & "<<n2<<" using function: "<<gcd(n1,n2)<<endl;
    return 0;
}
