#include<iostream>
using namespace std;
void eligibility (int age)
{
    if(age>=18)
    {
        cout<<"The candidate is eligible to vote."<<endl;
    }
    else
    {
        cout<<"The candidate is not eligible to vote."<<endl;
    }
}
int main()
{
    int age;
    cout<<"Enter the age of the candidate : ";
    cin>>age;
    eligibility (age);
    return 0;
}
