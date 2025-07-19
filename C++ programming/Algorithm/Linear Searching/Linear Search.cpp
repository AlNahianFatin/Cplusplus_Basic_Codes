#include<iostream>
using namespace std;

int main()
{
    int n, data;

    cout<<"Enter how many integers you want to input : ";
    cin>>n;
    int a[n];

    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter index "<<i+1<<" value : ";
        cin>>a[i];
    }

    cout<<"\nEnter the integer you want to search : ";
    cin>>data;

    int found = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == data)
        {
            cout<<"\nData found at index "<<i<<"."<<endl;
            found++;
            break;
        }
    }
    if(found == 0)
    {
        cout<<"\nData not found."<<endl;
    }
}
