#include<iostream>
using namespace std;
int main()
{
    float grade,sum=0;
    for(int i=1;i<=5;i++)
    {
        cout<<"Enter the grade of student no. "<<i<<" = ";
        cin>>grade;
        sum=sum+grade;
    }
    cout<<"Average grade of the 5 students is = "<<sum/5<<endl;
    return 0;
}
