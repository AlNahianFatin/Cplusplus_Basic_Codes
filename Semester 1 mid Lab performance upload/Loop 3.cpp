#include<iostream>
using namespace std;
int main()
{
    float temp,hum,avg_t,avg_h,sum_t=0,sum_h;
    for(int i=1;i<=5;i++)
    {
        cout<<"Enter temperature of day "<<i<<" : ";
        cin>>temp;
        sum_t=sum_t+temp;
    }
    for(int i=1;i<=5;i++)
    {
        cout<<"Enter humidity of day "<<i<<" : ";
        cin>>hum;
        sum_h=sum_h+hum;
    }
    cout<<"Average temperature of 5 days is = "<<sum_t/5<<endl;
    cout<<"Average humidity of 5 days is = "<<sum_h/5<<endl;
}
