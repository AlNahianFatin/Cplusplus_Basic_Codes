#include<iostream>
using namespace std;

int main(){
    int arr[10];

    cout << "Array_1 = ";
    for(int i = 0; i < 10; i++)
        cin >> arr[i];

    for(int i = 0; i < 10; i++){
        int count = 0;
        bool isDuplicate = false;
        for(int j = 0; j < 10; j++){
            if(arr[i] == arr[j]){
                count++;
                if(j < i)
                    isDuplicate = true;
            }
        }
        if(!isDuplicate){
            if(count == 1)
                cout << arr[i] << " occurs = " << count << " time" << endl;
            else
                cout << arr[i] << " occurs = " << count << " times" << endl;
        }
    }

    return 0;
}
