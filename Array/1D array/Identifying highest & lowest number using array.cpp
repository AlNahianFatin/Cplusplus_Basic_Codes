#include<iostream>
using namespace std;
int main()
{
    int num,x=0;
    cout<<"Enter total numbers to identify from : ";
    cin>>num;
    float arr[num];
    for(int i=0;i<num;i++)
    {
        cout<<"Enter the number "<<i+1<<" : ";
        cin>>arr[i];
    }

    float highest=arr[0];
    for(int i=0;i<num;i++)
    {
        if(highest<arr[i])
        {
            highest=arr[i];
        }
    }
    cout<<"\nHighest value is = "<<highest<<endl;

    float lowest=arr[0];
    for(int i=0;i<num;i++)
    {
        if(lowest>arr[i])
        {
            lowest=arr[i];
        }
    }
    cout<<"\nLowest value is = "<<lowest<<endl;
    return 0;
}
