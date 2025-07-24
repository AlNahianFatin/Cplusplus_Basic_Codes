#include<iostream>
using namespace std;
int main()
{
    int n,triNum;
    triNum=0;
    for(n=1; n<=200; n=n+1)
        triNum=triNum+n;
    //cout<<n<<endl;
    cout<<"The 200th triangular number= "<<triNum;
    return 0;
}
