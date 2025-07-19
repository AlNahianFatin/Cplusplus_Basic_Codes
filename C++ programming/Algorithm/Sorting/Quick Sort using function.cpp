#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low;

    for(int j = low+1; j <= high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i], arr[low]);
    return i;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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

    quickSort(arr, 0, n - 1);

    cout << "Sorted array : ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout<<endl;

    return 0;
}
