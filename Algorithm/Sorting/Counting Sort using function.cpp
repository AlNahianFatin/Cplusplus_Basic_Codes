#include<bits/stdc++.h>
using namespace std;

void countingSort (int arr[], int n)
{
    int maxElement = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }

    int c [maxElement + 1];

    for(int i = 0; i <= maxElement; i++)
        c[i] = 0;

    for (int i = 0; i < n; i++)
        c[arr[i]]++;

    for (int i = 1; i <= maxElement; i++)
        c[i] += c[i - 1];

    int b[n];
    for (int i = n - 1; i >= 0; i--)
    {
        b[c[arr[i]] - 1] = arr[i];
        c[arr[i]]--;
    }

    for (int i = 0; i < n; ++i)
        arr[i] = b[i];
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void binarySearch (int arr[], int n, int item)
{
    int l = 0, r = n - 1, mid;
    bool found = false;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if(item == arr[mid])
        {
            cout<<"\n"<<item<<" is found in the array at the "<<mid+1<<"th element."<<endl;
            found = true;;
            break;
        }
        else if (item > arr[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    if(found == false)
        cout<<"\n"<<item<<" is not found in the array"<<endl;
}

int main()
{
    int n = 10;
    int arr[n];

    for(int i = 0; i < n; i++)
        arr[i] = rand() % 100;

    cout<<"Original array : ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout<<endl;

    countingSort(arr, n);
    cout<<"Using counting sort : ";
    display(arr, n);

    int item;
    cout<<"\nItem to search : ";
    cin>>item;
    binarySearch(arr, n, item);

    return 0;
}
