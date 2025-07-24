#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char name[200];
    cout<<"Enter your name : ";
    gets(name);
    cout<<"Welcome "<<name<<"!"<<endl;
    return 0;
}
