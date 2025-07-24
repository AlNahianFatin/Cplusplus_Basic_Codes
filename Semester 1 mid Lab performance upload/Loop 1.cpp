#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number of products : ";
    cin>>n;
    int quant[n];
    float price[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Quantity of product "<<i+1<<" = ";
        cin>>quant[i];
        cout<<"Price of product "<<i+1<<" = ";
        cin>>price[i];
        sum=sum+quant[i]*price[i];
    }
    cout<<"Total cost = "<<sum<<endl;
    return 0;
}
