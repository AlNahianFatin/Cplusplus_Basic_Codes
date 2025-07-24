// Function to calculate the nth triangular number
#include <iostream>
using namespace std;
void calculateTriangularNumber ( int n )
{
    int i, triangularNumber = 0;
    for ( i = 1; i <= n; ++i )
        triangularNumber += i;
    cout<<"Triangular number "<<n <<" is " <<triangularNumber<<endl;
}
int main (void)
{
    int num;
    cout<<"Enter the number for which you want to calculate the triangular number : ";
    cin>>num;
    calculateTriangularNumber (num);
    calculateTriangularNumber (20);
    calculateTriangularNumber (50);
    return 0;
}
