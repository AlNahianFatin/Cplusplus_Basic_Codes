#include<iostream>
using namespace std;
void factorial (int num)
{
    int sum=1;
    for(int i=1; i<num; i++)
    {
        sum += sum*i;
    }
    cout<<"The factorial of "<<num<<" is = "<<sum;
}
int main()
{
    int num;
    cout<<"Enter an integer number : ";
    cin>>num;
    factorial (num);
    return 0;
}
