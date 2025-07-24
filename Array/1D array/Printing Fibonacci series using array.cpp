#include <iostream>
using namespace std;
int main (void)
{
    int size;
    cout<<"Enter the number of Fibonacci series : ";
    cin>>size;
    cout<<endl;
    int Fibonacci[size];
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;
    for (int i = 2; i < size; ++i )
    {
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }
    for (int i = 0; i < size; ++i )
    {
        cout<< "Fibonacci["<<i<<"]="<<Fibonacci[i]<<endl;
    }
    return 0;
}
