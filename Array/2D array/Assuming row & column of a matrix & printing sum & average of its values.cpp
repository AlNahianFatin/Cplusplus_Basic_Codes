#include<iostream>
using namespace std;
int main()
{
    float arr[3][4]= {{1.5,2.5,3.5,4.5}, {1.1,2.2,3.3,4.4}, {1.01,1.11,1.21,1.31}};
    int row=sizeof (arr)/sizeof (arr[0]);
    int col=sizeof (arr[0])/ sizeof (arr[0][0]);
    float sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    cout<<"The matrix has "<<row<<" rows."<<endl;
    cout<<"The matrix has "<<col<<" columns."<<endl;
    cout<<"Summation of the values = "<<sum<<endl;
    cout<<"Average of the values = "<<sum/(row*col)<<endl;
    return 0;
}
