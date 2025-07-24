#include<iostream>
using namespace std;
void small(float num[], int size)
{
    float lowest=num[0];
    for(int i=1; i<size; i++)
    {
        if(lowest>num[i])
        {
            lowest=num[i];
        }
    }
    cout<<"\n"<<lowest<<" is the lowest number.";
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
    small(arr,n);
    return 0;
}
