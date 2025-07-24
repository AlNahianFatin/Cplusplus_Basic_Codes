#include<iostream>
using namespace std;
int main()
{
    float in_arr[5],fl_arr[5],arr[5];
    int i,j;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        if(arr[i] == (int) arr[i])
        {
            in_arr[i]=arr[i];
            cout<<"Integer : "<<in_arr[i]<<" "<<endl;
        }
        else
        {
            fl_arr[i]=arr[i];
             cout<<"Float : "<<fl_arr[i]<<" "<<endl;
        }
    }
    return 0;
}
