#include<iostream>
using namespace std;
int main()
{
    int ni[4];
    float nf[4],sumi=0,sumf=0,muli=1,mulf=1;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter integer number "<<i+1<<" : ";
        cin>>ni[i];
        sumi=sumi+ni[i];
        muli=muli*ni[i];
    }
    cout<<"Summation of 4 integer numbers is : "<<sumi<<endl;
    cout<<"Average of 4 integer numbers is : "<<sumi/4<<endl;
    cout<<"Multiplication of 4 integer numbers is : "<<muli<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<"Enter floating numbers "<<i+1<<" : ";
        cin>>nf[i];
        sumf=sumf+nf[i];
        mulf=mulf*nf[i];
    }
    cout<<"Summation of 4 floating numbers is : "<<sumf<<endl;
    cout<<"Multiplication of 4 floating numbers is : "<<mulf<<endl;
    cout<<"Average of 4 floating numbers is : "<<sumf/4<<endl;

    cout<<"Summation of all the numbers is = "<<sumi+sumf<<endl;
    cout<<"Average of all the numbers is = "<<(sumi+sumf)/8<<endl;
    cout<<"Multiplication of all the numbers is = "<<muli*mulf<<endl;
    return 0;
}
