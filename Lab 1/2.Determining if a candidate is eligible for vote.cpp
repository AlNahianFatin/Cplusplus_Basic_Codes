#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age of the candidate: "<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<"The candidate is eligible"<<endl;
    }
    else
    {
        cout<<"The candidate is not eligible"<<endl;
    }
    return 0;
}
