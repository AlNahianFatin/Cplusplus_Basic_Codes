#include<iostream>
using namespace std;
int main()
{
    float buying_price, selling_price, difference;
    cout<<"Enter buying price : ";
    cin>>buying_price;
    cout<<"Enter selling price : ";
    cin>>selling_price;
    difference = selling_price - buying_price;
    if(difference<0)
    {
        cout<<"The seller has made a loss. The loss is "<<-difference<<" units.";
    }
    else if(difference>0)
    {
        cout<<"The seller has made a profit. The profit is "<<difference<<" units.";
    }
    else
    {
        cout<<"The seller has made neither profit, nor loss.";
    }
    return 0;
}
