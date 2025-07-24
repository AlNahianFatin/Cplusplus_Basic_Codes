#include<iostream>
using namespace std;
int main()
{
    int num,d1sum=0,d2sum=0;
    cout<<"Enter row & column number of the square matrix: ";
    cin>>num;
    cout<<endl;
    int A[num][num];
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            cout<<"Enter matrix row "<<i+1<<" column "<<j+1<<" value : ";
            cin>>A[i][j];
        }
    }
    cout<<endl;
    cout<<"\nyour matrix is : "<<endl;
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0; i<num; i++)
    {
        for(int j=0; j<num; j++)
        {
            if(i==j)
            {
                d1sum+=A[i][j];
            }
            if(i+j==(num-1))
            {
                d2sum+=A[i][j];
            }
        }

    }
    cout<<"\nSum of the left to right diagonal is: "<<d1sum<<endl;
    cout<<"Sum of the left to right diagonal is: "<<d2sum<<endl;
    cout<<"Sum of both the diagonals: "<<d1sum+d2sum<<endl;
    return 0;
}
