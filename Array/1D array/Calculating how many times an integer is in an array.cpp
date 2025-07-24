#include<iostream>
using namespace std;
int main()
{
    int arr[10], num, count = 0;

    cout<<"Array_1 = ";
    for(int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }

    cout<<"Input a number to search : ";
    cin>>num;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    }

    cout<<"The number occurs "<<count<<" times in the array"<<endl;

    return 0;
}
