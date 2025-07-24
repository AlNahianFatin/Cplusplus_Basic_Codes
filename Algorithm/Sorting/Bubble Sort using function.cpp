#include<bits/stdc++.h>
using namespace std;

void bubbleSort (int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        if(flag == false)
            break;
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
    int arr[] = {56, 42, 20, 11, 54, 9, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array : ";
    display(arr, n);
    bubbleSort(arr, n);
    cout << "Using bubble sort : ";
    display(arr, n);

    return 0;
}
