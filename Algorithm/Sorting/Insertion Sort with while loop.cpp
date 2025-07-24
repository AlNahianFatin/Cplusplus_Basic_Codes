#include <iostream>
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

    for (int i = 1; i < n; i++)
    {
        temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            countComparisons++;
            a[j + 1] = a[j];
            countExchanges++;
            j--;
        }
        a[j + 1] = temp;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\nNumber of comparisons: " << countComparisons << endl;
    cout << "Number of exchanges: " << countExchanges << endl;

    return 0;
}
