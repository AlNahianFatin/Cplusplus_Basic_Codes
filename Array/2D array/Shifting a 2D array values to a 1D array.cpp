#include<iostream>
using namespace std;
int main()
{
    int row, col, n=0;
    cout<<"Enter the number of rows : ";
    cin>>row;
    cout<<"Enter the number of columns : ";
    cin>>col;
    cout<<endl;
    float arr1[row*col],arr2[row][col];
    //taking matrix values
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter row "<<i+1<<" column "<<j+1<<" value : ";
            cin>>arr2[i][j];
        }
    }
    //shifting to 1D array
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr1[n]=arr2[i][j];
            n++;
        }
    }
    //printing the 1D array
    cout<<"\nThe values of the 1D array is : "<<endl;
    for(int i=0; i<row*col; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}
