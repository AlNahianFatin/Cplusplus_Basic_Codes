#include<iostream>
using namespace std;
void big(float num[], int size)
{
    float highest=num[0];
    for(int i=1; i<size; i++)
    {
        if(highest<num[i])
        {
            highest=num[i];
        }
    }
    cout<<"\n"<<highest<<" is the highest number.";
}
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<endl;
    float arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the value "<<i+1<<" : ";
        cin>>arr[i];
    }
    big(arr,n);
    return 0;
}
