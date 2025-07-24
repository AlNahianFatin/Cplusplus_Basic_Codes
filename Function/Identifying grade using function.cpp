#include<iostream>
using namespace std;
void grade(float marks)
{
    if(marks>=0 && marks<=100)
    {
        if(marks<=100 && marks>=90)
        {
            cout<<"A+"<<endl;
        }
        else if(marks<90 && marks>=85)
        {
            cout<<"A"<<endl;
        }
        else if(marks<85 && marks>=80)
        {
            cout<<"A-"<<endl;
        }
        else if(marks<80 && marks>=75)
        {
            cout<<"B+"<<endl;
        }
        else if(marks<75 && marks>=70)
        {
            cout<<"B"<<endl;
        }
        else if(marks<70 && marks>=65)
        {
            cout<<"B-"<<endl;
        }
        else if(marks<65 && marks>=60)
        {
            cout<<"C+"<<endl;
        }
        else if(marks<60 && marks>=55)
        {
            cout<<"C"<<endl;
        }
        else if(marks<55 && marks>=50)
        {
            cout<<"D+"<<endl;
        }
        else
        {
            cout<<"F"<<endl;
        }
    }
    else
        cout<<"Invalid marks."<<endl;
}
int main()
{
    float marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    grade(marks);
    return 0;
}
