#include<iostream>
using namespace std;
int main()
{
    double arr[10];
    cout << "Enter 10 numbers: ";

    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    cout << "Your input numbers in normal order: " << endl;
    for(int i = 0; i < 10; i++)
        cout << arr[i] << " ";

    cout << "\nYour input numbers in reverse order: " << endl;
    for(int i = 9; i >= 0; i--)
        cout << arr[i] << " ";

    return 0;
}
