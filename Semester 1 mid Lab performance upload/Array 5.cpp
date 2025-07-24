#include<iostream>
using namespace std;
int main()
{
    float arr1[6];
    int arr2[6];
    for(int i=0;i<6;i++)
    {
        cout<<"Enter 6 floating numbers : ";
        cin>>arr1[i];
    }
    for(int j=0;j<6;j++)
    {
        cout<<"Enter 6 integer numbers : ";
        cin>>arr2[j];
    }
    for(int i=0;i<6;i++)
    {
        for(int j=5;j>=0;j--)
        {
            float multi=arr1[i]*arr2[j];
            cout<<multi<<" ";
        }
    }
    return 0;
}
