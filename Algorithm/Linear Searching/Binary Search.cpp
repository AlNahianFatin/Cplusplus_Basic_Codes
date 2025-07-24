#include<iostream>
using namespace std;

int main()
{
    int n, data;

    cout<<"Enter how many integers you want to input : ";
    cin>>n;
    int a[n];

    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter index "<<i+1<<" value : ";
        cin>>a[i];
    }

    cout<<"\nEnter the integer you want to search : ";
    cin>>data;

    int l = 0, r = n - 1, mid, found = 0;

    while (l <= r)
    {
        mid = (l + r) / 2;
        if(data == a[mid])
        {
            cout<<"\nData found at index "<<mid<<"."<<endl;
            found++;
            break;
        }
        else if (data > a[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    if(found == 0)
        cout<<"\nData not found."<<endl;
}
