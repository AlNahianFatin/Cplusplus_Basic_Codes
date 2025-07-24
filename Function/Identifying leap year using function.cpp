#include<iostream>
using namespace std;
void leap_year(int year)
{
     if(year%4==0 && year%100!=0 || year%400==0)
    {
        cout<<"The year is leap year."<<endl;
    }
    else
    {
        cout<<"The year is not leap year."<<endl;
    }
}
int main()
{
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    leap_year(year);
    return 0;
}
