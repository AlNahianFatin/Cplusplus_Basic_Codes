#include<iostream>
using namespace std;
int main()
{
    double number;
    cout<<"Enter your marks : ";
    cin>>number;
    if(number<0 || number>100)
    {
        cout<<"Invalid"<<endl;
    }
    else
    {
        if(number>=90 && number<=100)
        {
            cout<<"A+"<<endl;
        }
        else if(number>=85 && number<90)
        {
            cout<<"A"<<endl;
        }
        else if(number>=80 && number<85)
        {
            cout<<"B+"<<endl;
        }
        else if(number>=75 && number<80)
        {
            cout<<"B"<<endl;
        }
        else if(number>=70 && number<75)
        {
            cout<<"C+"<<endl;
        }
        else if(number>=65 && number<70)
        {
            cout<<"C"<<endl;
        }
        else if(number>=60 && number<65)
        {
            cout<<"D+"<<endl;
        }
        else if(number>=50 && number<60)
        {
            cout<<"D"<<endl;
        }
        else
        {
            cout<<"F"<<endl;
        }
    }
    return 0;
}
