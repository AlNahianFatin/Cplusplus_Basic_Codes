#include<iostream>
using namespace std;
int main()
{
    int row,col,sumr=0,sumc=0;
    cout<<"Enter odd row number : ";
    cin>>row;
    cout<<"Enter odd column number : ";
    cin>>col;
    cout<<endl;
    int A[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter matrix row "<<i+1<<" column "<<j+1<<" value : ";
            cin>>A[i][j];
        }
    }
    cout<<endl;
    cout<<"\nyour matrix is : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=(row/2); i<row; i+=row)
    {
        for(int j=0; j<col; j++)
        {
            sumr+=A[i][j];
        }
    }
    cout<<"\nSummation of middle row: "<<sumr;
    for(int i=0; i<row; i++)
    {
        for(int j=(col/2); j<col; j+=col)
        {
            sumc+=A[i][j];
        }
    }
    cout<<"\nSummation of middle column: "<<sumc<<endl;
    cout<<"And Summation of middle row & column: "<<sumr+sumc<<endl;
    return 0;
}
