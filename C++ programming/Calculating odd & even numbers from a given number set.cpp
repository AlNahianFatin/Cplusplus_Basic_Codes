#include<iostream>
using namespace std;
int main()
{
    int arr[10], countOdd=0, countEven=0;
    cout << "Enter 10 numbers: " << endl;

    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] % 2 == 0 && arr[i] >= 0)
        {
            countEven++;
        }
        else if(arr[i] % 2 != 0 && arr[i] >= 0)
        {
            countOdd++;
        }
    }

    cout << countOdd << " odd numbers." << endl;
    cout << countEven << " even numbers." << endl;

    return 0;
}
