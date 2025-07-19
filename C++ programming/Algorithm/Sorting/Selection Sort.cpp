#include<iostream>
using namespace std;

int main()
{
    int n, min, temp;

    cout<<"Enter how many integers you want to input : ";
    cin>>n;
    int a[n];

    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter index "<<i+1<<" value : ";
        cin>>a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        min = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
            if(min != i)
            {
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }
    }

    cout<<"\nThe sorted numbers now become : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
