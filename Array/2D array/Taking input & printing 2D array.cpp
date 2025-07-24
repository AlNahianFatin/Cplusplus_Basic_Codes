#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of columns : ";
    cin>>col;
    cout<<endl;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter row "<<i+1<<" column "<<j+1<<" value : ";
            cin>>arr[i][j];
        }
    }
     cout<<"\nYour matrix is : "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
