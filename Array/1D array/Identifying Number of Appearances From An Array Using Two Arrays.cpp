#include<iostream>
using namespace std;
int main()
{
    int count, size;
    bool counted = false;

    cout << "Enter how many numbers you want to input: ";
    cin >> size;

    int arr1[size], arr2[size];
    int arr2Index = 0;

    for(int i = 0; i < size; i++)
    {
        cout << "Enter index no. " << i+1 << ": ";
        cin >> arr1[i];
    }
    cout << endl << endl;

    for(int i = 0; i < size; i++)
    {
        counted = false;
        count = 0;
        for(int j = 0; j < arr2Index; j++)
        {
            if(arr1[i] == arr2[j])
            {
                counted = true;
                break;
            }
        }

        if(!counted)
        {
            arr2[arr2Index++] = arr1[i];
            count = 1;
            for(int j = i+1; j < size; j++)
            {
                if(arr1[i] == arr1[j])
                    count++;
            }
            if(count == 1)
                cout << arr1[i] << " is present only 1 time." << endl;
            else
                cout << arr1[i] << " is present " << count << " times." << endl;
        }
    }

    return 0;
}
