#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter row number : ";
    cin>>row;
    cout<<"Enter column number : ";
    cin>>col;
    cout<<endl;
    int A[row][col],B[row][col], prod[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter matrix A row "<<i+1<<" column "<<j+1<<" value : ";
            cin>>A[i][j];
        }
    }
    cout<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter matrix B row "<<i+1<<" column "<<j+1<<" value : ";
            cin>>B[i][j];
        }
    }
    cout<<"\nyour first matrix A matrix is : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nyour second matrix B matrix is : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nAddition of the two matrixes is : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<A[i][j]+B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nSubtraction of the two matrixes is : "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<A[i][j]-B[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0; i<row; ++i)
    {
        for (int j=0; j<col; ++j)
        {
            prod[i][j]=0;
            for (int k=0; k<col; ++k)
            {
                prod[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"\nMultiplication of the two matrixes is : "<<endl;
        for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<prod[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
