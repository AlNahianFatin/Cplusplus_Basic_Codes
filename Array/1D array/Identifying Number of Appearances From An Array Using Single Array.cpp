#include<iostream>
using namespace std;
int main()
{
    int count, size;
    bool counted = false;

    cout << "Enter how many numbers you want to input: ";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Enter index no. " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << endl << endl;

    for(int i = 0; i < size; i++)
    {
        counted = false;
        count = 0;
        for(int j = i-1; j >= 0; j--)
        {
            if(arr[j] == arr[i])
                counted = true;
        }

        if(!counted)
        {
            count = 1;
            for(int j = i+1; j < size; j++)
            {
                if(arr[i] == arr[j])
                    count++;
            }
            if(count == 1)
                cout << arr[i] << " is present only 1 time." << endl;
            else
                cout << arr[i] << " is present " << count << " times." << endl;
        }
    }

    return 0;
}
