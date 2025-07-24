#include<iostream>
using namespace std;
int main()
{
    int arr1len, arr2len;

    cout<<"Enter the number of elements for 1st array : ";
    cin>>arr1len;
    cout<<"Enter the number of elements for 2nd array : ";
    cin>>arr2len;

    int arr1[arr1len], arr2[arr2len], newarr[arr1len + arr2len];

    cout<<"\nEnter array 1 elements : ";
    for(int i = 0; i < arr1len; i++)
        cin>>arr1[i];

    cout<<"\nEnter array 2 elements : ";
    for(int i = 0; i < arr2len; i++)
        cin>>arr2[i];

    int index = 0;
    for(int i = arr2len-1; i >= 0; i--)
        newarr[index++] = arr2[i];

    for(int i = arr1len-1; i >= 0; i--)
        newarr[index++] = arr1[i];

    cout<<"\nThe new array becomes : ";
    for(int i = 0; i < (arr1len + arr2len); i++)
        cout<<newarr[i]<<" ";

    return 0;
}
