#include<iostream>
using namespace std;

int main()
{
    int n, flag, temp;

    cout<<"Enter how many integers you want to input : ";
    cin>>n;
    int a[n];

    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter index "<<i+1<<" value : ";
        cin>>a[i];
    }

    for(int i = 0; i < n; i++)
    {
        temp = a[i];
        for(int j = i - 1; j >= 0 && a[j] > temp; j--)
        {
            a[j + 1] = a[j];
            a[j] = temp;
        }
    }

    cout<<"\nThe sorted numbers now become : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
