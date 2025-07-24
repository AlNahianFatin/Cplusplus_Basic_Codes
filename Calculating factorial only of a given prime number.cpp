#include<iostream>
using namespace std;

void prime (int num)
{
    int sum=1;
    for(int i=2; i<num; i++)
    {
        cout<<"Output: ";
        if(num % i != 0)
        {
            for(int i=1; i<num; i++)
            {
                sum += sum*i;
            }
            cout<<sum<<endl;
            break;
        }
        else
        {
            cout<<"Error! Not a prime number."<<endl;
            break;
        }
    }
}
int main()
{
    int num;
    cout<<"Input: ";
    cin>>num;
    prime (num);
    return 0;
}
