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

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            flag = 0;
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }

    cout<<"\nThe sorted numbers now become : ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
}
