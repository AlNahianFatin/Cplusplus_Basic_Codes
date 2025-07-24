#include<iostream>
using namespace std;
void prime (int num)
{
    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            cout<<"The number is not prime."<<endl;
            break;
        }
        else
        {
            cout<<"The number is prime."<<endl;
            break;
        }
    }
}
int main()
{
    int num;
    cout<<"Enter any integer number : ";
    cin>>num;
    prime (num);
    return 0;
}
