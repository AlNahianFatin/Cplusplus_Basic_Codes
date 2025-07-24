#include<iostream>
using namespace std;

int main(){
    int arr1len, arr2len, count = 0;

    cout<<"Number of elements for array 1 : ";
    cin>>arr1len;
    cout<<"Number of elements for array 2 : ";
    cin>>arr2len;

    int arr1[arr1len], arr2[arr2len];
    bool printed[arr1len] = {false};

    cout << "Enter elements for Array_1: ";
    for(int i = 0; i < 6; i++)
        cin >> arr1[i];

    cout << "Enter elements for Array_2: ";
    for(int i = 0; i < 6; i++)
        cin >> arr2[i];

    cout << "Common elements: ";
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            bool foundCommon = false;

            if(arr1[i] == arr2[j] && !printed[i]){
                cout << arr1[i] << " ";
                printed[i] = true;
                foundCommon = true;
                count++;
                break;
            }
        }
    }

    if(count == 0)
        cout << "No common element!";

    return 0;
}
