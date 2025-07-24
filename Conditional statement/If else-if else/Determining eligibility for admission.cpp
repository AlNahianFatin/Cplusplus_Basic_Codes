#include<iostream>
using namespace std;
int main()
{
    int m, p, c, sum1=m+p+c, sum2=m+p;
    cout<<"Enter maths number : ";
    cin>>m;
    cout<<"Enter physics number : ";
    cin>>p;
    cout<<"Enter chemistry number : ";
    cin>>c;

    if(m>=65 && p>=55 && c>=50 && sum1>=190)
    {
        cout<<"\nThe candidate is eligible."<<endl;
    }
    else if(m>=65 && p>=55 && c>=50 && sum2>=140)
    {
        cout<<"\nThe candidate is eligible."<<endl;
    }
    else
    {
        cout<<"\nThe candidate is not eligible."<<endl;
    }
    return 0;
}
