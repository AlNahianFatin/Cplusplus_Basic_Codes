#include<iostream>
using namespace std;
int main()
{
    int myArray[5] = {3, 4, 5, 6, 7};
    for(int i=1; i<4; i++)
    {
        cout<<myArray[i]<<endl;
    }
    cout<<endl;
    for(int i=1; i<5; i++)
    {
        cout<<myArray[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<myArray[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<=5; i++)
    {
        cout<<myArray[i]<<endl;
    }
}
