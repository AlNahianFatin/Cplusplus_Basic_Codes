#include<iostream>
using namespace std;
int main()
{
    int ele,y=0;
    cout<<"Enter the number of elements in the array : ";
    cin>>ele;
    cout<<endl;
    float n,arr[ele];
    for(int i=0;i<ele;i++)
    {
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\nEnter the number you want to identify : ";
    cin>>n;
    for(int i=0;i<8;i++)
    {
        if(arr[i]==n)
        {
            y++;
        }
    }
    if(y==0)
    {
        cout<<"\n"<<n<<" is not present.";
    }
    else if(y==1)
    {
        cout<<"\n"<<n<<" is present only "<<y<<" time.";
    }
    else
    {
        cout<<"\n"<<n<<" is present "<<y<<" times.";
    }
    return 0;
}
