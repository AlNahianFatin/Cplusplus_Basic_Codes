#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows & columns : ";
    cin>>n;
    cout<<endl;
    float arr[n][n],transpose[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter row "<<i+1<<" column "<<j+1<<" value : ";
            cin>>arr[i][j];
        }
    }
    cout<<"\nYour matrix is :"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
      for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[j][i]=arr[i][j];
        }
    }
    cout<<"\nThe transpose matrix is :"<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
