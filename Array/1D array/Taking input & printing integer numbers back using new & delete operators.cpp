#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many integers do you have? ";
    cin>>n;
    cout<<endl;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter integer no."<<i+1<<": ";
        cin>>a[i];
    }
    cout<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<"Your integer no."<<i+1<<": "<<a[i]<<" "<<endl;
    }
    delete a;
    return 0;
}
