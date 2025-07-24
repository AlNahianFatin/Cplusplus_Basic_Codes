#include<iostream>
using namespace std;
int main()
{
    int m, p, c, sum1=m+p+c, sum2=m+p;
    cout<<"Type maths number: "<<endl;
    cin>>m;
    cout<<"Type physics number: "<<endl;
    cin>>p;
    cout<<"Type chemistry number: "<<endl;
    cin>>c;

    if(m>=65 && p>=55 && c>=50 && sum1>=190)
    {
        cout<<"The candidate is eligible"<<endl;
    }
    else if(m>=65 && p>=55 && c>=50 && sum2>=140)
    {
        cout<<"The candidate is eligible"<<endl;
    }
    else
    {
        cout<<"The candidate is not eligible"<<endl;
    }
    return 0;
}
