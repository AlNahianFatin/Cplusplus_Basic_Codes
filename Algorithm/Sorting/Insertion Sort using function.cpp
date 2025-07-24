#include<bits/stdc++.h>
using namespace std;

void insertionsort (int arr[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int v = arr[i];

        int j = i - 1;
        while(arr[j] > v && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = v;
    }
}

void display (int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {18, 89, 25, 43, 54, 99, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array : ";
    display(arr, n);
    insertionsort(arr, n);
    cout << "Using insertion sort : ";
    display(arr, n);

    return 0;
}
