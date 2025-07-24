#include<iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    double balance;
public:
    void setInfo(int accountnumber, double Balance)
    {
        accountNumber=accountnumber;
        balance=Balance;
    }
    void deposit(double amount)
    {
        balance+=amount;
    }
    void withdraw(double amount)
    {
        balance-=amount;
    }
    double getBalance()
    {
        return balance;
    }
};
int main()
{
    int num;
    double bal, dep, withdr;
    BankAccount myAccount;
    cout<<"Enter account number: ";
    cin>>num;

    cout<<"Enter balance: ";
    cin>>bal;
    myAccount.setInfo(num,bal);

    cout<<"Enter deposit amount: ";
    cin>>dep;
    myAccount.deposit(dep);

    cout<<"Enter withdraw amount: ";
    cin>>withdr;
    myAccount.withdraw(withdr);

    cout<<"\nYour account no. "<<num<<endl;
    cout<<"Your previous balance was: "<<bal<<endl;
    cout <<"Your current balance: "<<myAccount.getBalance()<<endl;
    return 0;
}
