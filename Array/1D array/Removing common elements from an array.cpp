#include<iostream>
using namespace std;
int main(){
    int size, count = 0;
    cout<<"Enter the number of elements for the array: ";
    cin>>size;

    if(size <= 5)
        cout<<"\nArray size should be more than FIVE."<<endl;

    else{
        int arr[size], check[size];

        cout<<"\nArray_1 = ";
        for(int i = 0; i < size; i++)
            cin>>arr[i];

        for(int i = 0; i < size; i++){
            bool isDuplicate = false;

            for(int j = 0; j < i; j++){
                if(arr[i] == arr[j])
                    isDuplicate = true;
            }
            if(!isDuplicate){
                check[count] = arr[i];
                count++;
            }
        }

        if(count == size)
            cout<<"Array already unique!"<<endl;
        else{
            cout<<"The modified array : ";
            for(int i = 0; i < count; i++)
                cout<<check[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}
