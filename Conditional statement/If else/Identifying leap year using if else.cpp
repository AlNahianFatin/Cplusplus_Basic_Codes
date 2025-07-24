#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter your year to be tested: "<<endl;
    cin>>year;
    if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"Leap year"<<endl;
    }
    else
    {
        cout<<"Not leap year"<<endl;
    }
    return 0;
}
