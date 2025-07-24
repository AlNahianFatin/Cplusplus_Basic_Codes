#include<iostream>
using namespace std;
int main()
{
    int num, triNum=0;
    cout<<"Enter the number for which you want to calculate the triangular number : ";
    cin>>num;
    for(int i=1;i<=num;i+=1)
    {
        triNum+=i;
    }
    cout<<"The "<<num<<"th triangular number = "<<triNum<<endl;
    return 0;
}
