#include<iostream>
using namespace std;
int main()
{
    int n;
    float sum=0;
    cout<<"Enter number of students : ";
    cin>>n;
    cout<<endl;
    int students[n];
    //input
    for(int i=0; i<5; i++)
    {
        cout<<"Mark of student "<<i+1<<" = ";
        cin>>students[i];
        sum=sum+students[i];
    }
    cout<<"Total marks = "<<sum<<endl;
    float avg=(float)sum/n;
    cout<<"Average = "<<avg<<endl;
    //minimum & maximum
    float max=students[0];
    float min=students[0];
    for(int i=0; i<n; i++)
    {
        if(max<students[i])
        {
            max=students[i];
        }
        if(min>students[i])
        {
            min=students[i];
        }
    }
    cout<<"Maximum marks = "<<max<<endl;
    cout<<"Minimum marks = "<<min<<endl;
    return 0;
}
