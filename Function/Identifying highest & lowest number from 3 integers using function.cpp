#include<iostream>
using namespace std;
void lowest (float a, float b, float c)
{
    if(a<b && a<c)
    {
        cout<<"\n"<<a<<" is the lowest number."<<endl;
    }
    else if(b<a && b<c)
    {
        cout<<"\n"<<b<<" is the lowest number."<<endl;
    }
    else if(c<a && c<b)
    {
        cout<<"\n"<<c<<" is the lowest number."<<endl;
    }
    else if(a==b && b==c)
    {
        cout<<"\n"<<"All the three numbers are equal. So the lowest number among all the numbers can not be identified."<<endl;
    }
     else
    {
        cout<<"\n"<<"Two numbers are equal. So the lowest number among the numbers can not be identified."<<endl;
    }
}
void highest (float a, float b, float c)
{
    if(a>b && a>c)
    {
        cout<<"\n"<<a<<" is the highest number."<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"\n"<<b<<" is the highest number."<<endl;
    }
    else if(c>a && c>b)
    {
        cout<<"\n"<<c<<" is the highest number."<<endl;
    }
    else if(a==b && b==c)
    {
        cout<<"\n"<<"All the three numbers are equal. So the highest number among all the numbers can not be identified."<<endl;
    }
     else
    {
        cout<<"\n"<<"Two numbers are equal. So the highest number among the numbers can not be identified."<<endl;
    }
}
int main()
{
    float a,b,c;
    cout<<"Enter the 1st number : ";
    cin>>a;
    cout<<"Enter the 2nd number : ";
    cin>>b;
    cout<<"Enter the 3rd number : ";
    cin>>c;
    lowest(a,b,c);
    highest(a,b,c);
    return 0;
}
