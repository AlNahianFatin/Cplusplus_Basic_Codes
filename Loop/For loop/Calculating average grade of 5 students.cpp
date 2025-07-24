#include<iostream>
using namespace std;
int main()
{
    float marks,average,sum=0;
    cout<<"Input grades of 5 students\n";
    for(int i=0;i<5;i++)
    {
        cout<<"Grade: ";
        cin>>marks;
        sum=sum+marks;
    }
    average=sum/5;
    cout<<"Average: "<<average<<endl;
    return 0;
}
