#include<iostream>
using namespace std;
int main()
{
    int age1,age2,age3,oldest,youngest;
    cout<<"Enter ages of 3 people : "<<endl;
    cin>>age1>>age2>>age3;
    if(age1>age2)
    {
        if(age1>age3)
        {
         oldest=age1;
        }
        else
        {
            oldest=age3;
        }
    }
    else
    {
        if(age2>age3)
        {
            oldest=age2;
        }
        else
        {
            oldest=age3;
        }
    }
    cout<<"The oldest age is = "<<oldest<<endl;
     if(age1<age2)
    {
        if(age1<age3)
        {
         youngest=age1;
        }
        else
        {
            youngest=age3;
        }
    }
    else
    {
        if(age2<age3)
        {
            youngest=age2;
        }
        else
        {
            youngest=age3;
        }
    }
    cout<<"The youngest age is = "<<youngest<<endl;
}
