// Program to illustrate static and automatic variables
#include<iostream>
using namespace std;
void auto_static (void)
{
    int autoVar = 1;
    static int staticVar = 1;
    cout<<"automatic = "<<autoVar<<" static = "<<staticVar<<"\n";
    ++autoVar; //when the function would be called in loop, each time value of autoVar would be renewed to 1
    ++staticVar; //when the function would be called in loop, compiler would remember its previous value and increment it by 1
}
int main (void)
{
    int i;
    for ( i = 0; i < 5; ++i )
        auto_static ();
    return 0;
}
