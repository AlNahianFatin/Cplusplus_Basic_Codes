#include<iostream>
using namespace std;
int main()
{
    int amount,total=0;
    for(int i=1;i<=12;i++)
    {
        cout<<"Savings of month number "<<i<<" : ";
        cin>>amount;
        total+=amount;
    }
    cout<<"Total savings: "<<total<<endl;
}
