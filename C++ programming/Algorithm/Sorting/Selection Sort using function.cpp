#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int k;
    for(int i=0; i<n-1; i++)
    {
        k=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[k])
                k=j;
        }
        if(k!=i)
            swap(arr[k], arr[i]);
    }
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[]= {56, 42, 20, 11, 54, 9, 21};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array : ";
    display(arr, n);
    selectionSort(arr, n);
    cout<<"Using selection sort : ";
    display(arr, n);

    return 0;
}
