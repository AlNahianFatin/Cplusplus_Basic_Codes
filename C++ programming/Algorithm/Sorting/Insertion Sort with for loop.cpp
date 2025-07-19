#include<iostream>
using namespace std;

int main()
{
    int n, temp, countComparisons = 0, countExchanges = 0;

    cout<<"Enter how many integers you want to input : ";
    cin>>n;
    int a[n];

    cout<<"\nUnsorted Elements: ";
    for(int i = 0; i < n; i++)
        cin>>a[i];

    for(int i = 1; i < n; i++)
    {
        temp = a[i];
        for(int j = i - 1; j >= 0; j--)
        {
            countComparisons++;
            if(a[j] > temp)
            {
                countExchanges++;
                a[j + 1] = a[j];
                a[j] = temp;
            }
            else
                break;
        }
    }

    cout<<"\nSorted Elements: ";
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";

    cout<<"\nNumber of comparisons = "<<countComparisons<<endl;
    cout<<"Number of exchanges = "<<countExchanges<<endl;
}
