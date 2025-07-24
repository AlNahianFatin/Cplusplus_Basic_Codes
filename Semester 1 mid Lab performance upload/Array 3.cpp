#include<iostream>
using namespace std;
int main()
{
    float num[3];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter the CGPA of student "<<i+1<<" : ";
        cin>>num[i];
    }
    if(num[0]<num[1])
    {
        if(num[0]<num[2])
        {
            cout<<"Student 1 has the lowest CGPA.";
        }
        else
        {
             cout<<"Student 3 has the lowest CGPA.";
        }
    }
    else
    {
        if(num[1]<num[2])
        {
             cout<<"Student 2 has the lowest CGPA.";
        }
        else
        {
             cout<<"Student 3 has the lowest CGPA.";
        }
    }
    return 0;
}
