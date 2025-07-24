#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //variables
    char x[]= "Al Nahian";
    char y[]= "Beautiful ";
    char z[]= "Weather";
    char x1[]= "Good Morning";
    char x2[]= "Good Morning";
    char a[15];
    char a1[15];
    char m[]= "Wonderfully ";
    char n[]= "done man.";
    char o[]= "Wonderful";
    char p[]= "Wonderfully";

    //programs to be executed
    int lnth= strlen(x);
    cout<<"Length of x is : "<<lnth<<endl;

    strcpy(a,y);
    cout<<"Copy of y in a : "<<a<<endl;

    strncpy(a1,y,8);
    cout<<"Copy of 8 letters of y in a : "<<a1<<endl;

    strcat(y,z);
    cout<<"Addition of y and z : "<<y<<endl;

    strncat(m,n,4);
    cout<<"Addition of y and z for 4 letters : "<<m<<endl;

    char up[]= "ramadan is near";
    strupr(up);
    cout<<"Up in upper case : "<<up<<endl;

    char low[]= "RAMADAN IS NEAR";
    strlwr(low);
    cout<<"low in lower case : "<<low<<endl;

    float r1= strcmp(x1,x2);
    cout<<"ASCII value difference of x1 and x2 : "<<r1<<endl;

    double r3= strncmp(o,p,10);
    cout<<"ASCII value difference of g and h for 10 letters : "<<r3<<endl;

    double r2=strcmp(o,p);
    cout<<"ASCII value difference of g and h : "<<r2<<endl;

    char c='e';
    char* ch= strchr(o,c);
    cout<<"Searching 'e' in c : "<<ch<<endl;

    char* st= strstr(p,o);
    cout<<st<<endl;

    return 0;
}
