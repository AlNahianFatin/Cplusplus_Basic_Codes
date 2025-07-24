#include<iostream>
using namespace std;
int main()
{
    int classh,classa;
    cout<<"Enter the number of classes held : "<<endl;
    cin>>classh;
    cout<<"Enter the number of classes attended : "<<endl;
    cin>>classa;
    float perc=classa*100/classh;
    if(perc<=100)
    {
        if(perc>=80)
        {
            cout<<"The student is allowed."<<endl;
        }
        else
        {
            cout<<"The student is not allowed."<<endl;
        }
    }
    else
    {
        cout<<"Your input data is wrong."<<endl;
    }
    return 0;
}
