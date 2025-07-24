#include<iostream>
using namespace std;
int main()
{
    double num1,num2,sum,sub,mul,div;
    char op;
    cout<<"Enter 1st number ";
    cin>>num1;
    cout<<"Enter the operator ";
    cin>>op;
    cout<<"Enter 2nd number ";
    cin>>num2;
    switch(op)
    {
    case '+':
        sum=num1+num2;
        cout<<"Sum = "<<sum<<endl;
        break;
    case '-':
        sub=num1-num2;
        cout<<"Subtraction = "<<sub<<endl;
        break;
    case '*':
        mul=num1*num2;
        cout<<"Multiplication = "<<mul<<endl;
        break;
    case '/':
        div=num1/num2;
        cout<<"Division = "<<div<<endl;
        break;
    default :
        cout<<"Invalid input"<<endl;
    }
    return 0;
}
