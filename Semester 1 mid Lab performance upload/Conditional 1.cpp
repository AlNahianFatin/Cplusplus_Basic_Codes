#include<iostream>
using namespace std;
int main()
{
    double avg_cgpa,sum=0,num[5],CGPA[5];
    for(int i=0; i<=4; i++)
    {
        cout<<"Enter your marks for course "<<i+1<<" : ";
        cin>>num[i];
        if(num[i]<=100 && num[i]>=0)
        {
            if(num[i]>=90)
            {
                cout<<"A+"<<endl;
                CGPA[i]=4.00;
            }
            else if(num[i]>=85)
            {
                cout<<"A"<<endl;
                CGPA[i]=3.75;
            }
            else if(num[i]>=80)
            {
                cout<<"B+"<<endl;
                CGPA[i]=3.50;
            }
            else if(num[i]>=75)
            {
                cout<<"B"<<endl;
                CGPA[i]=3.25;
            }
            else if(num[i]>=70)
            {
                cout<<"C+"<<endl;
                CGPA[i]=3.00;
            }
            else if(num[i]>=65)
            {
                cout<<"C"<<endl;
                CGPA[i]=2.75;
            }
            else if(num[i]>=60)
            {
                cout<<"D+"<<endl;
                CGPA[i]=2.50;
            }
            else if(num[i]>=50)
            {
                cout<<"D"<<endl;
                CGPA[i]=2.25;
            }
            else
            {
                cout<<"F"<<endl;
                CGPA[i]=0.00;
            }
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    for(int i=0; i<=4; i++)
    {
        sum=sum+CGPA[i];
    }
    avg_cgpa=sum/5;
    cout<<"Your final CGPA is = "<<avg_cgpa;
    return 0;
}

