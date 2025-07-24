#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //variables

    char x[]= "Al Nahian";
    char y[]= "Beautiful ";
    char z[]= "Weather ";
    char a[15];
    char a1[15];
    char m[]= "Wonderfully ";
    char n[]= "done man.";
    char o[]= "Wonderful";
    char p[]= "Wonderfully";
    char q[]= "wonDErfully";
    char up[]= "Ramadan is near 2023.";
    char low[]= "rAMADAN IS NEAR !@#$%^&*_+~`<>?';:[]{}()/*-+. 2023.";
    string onlyA(5,'A');


    //programs to be executed

    cout<<"Printing 5 A using string function : "<<onlyA<<endl<<endl;

    int lnth= strlen(x);
    cout<<"Length of x using function : "<<strlen(x)<<endl;
    cout<<"Length of x using variable : "<<lnth<<endl<<endl;

    char *cat=strcat(y,z); //adding z in y for the 1st time using function in cat variable
    cout<<"Addition of y & z in y using just y : "<<y<<endl;
    cout<<"Addition of y & z in y using variable : "<<cat<<endl;
    cout<<"Addition of y & z in y using function : "<<strcat(y,z)<<endl;//adding z in y for the 2nd time using just the function
    cout<<"Addition of y & z in y using variable for the 2nd time : "<<cat<<endl;//as the function has been called 2 times before, now cat variable stores the last time called y; which means it stores 2 times added z in y
    cout<<"Whereas z is unchanged : "<<z<<endl<<endl;

    char *ncat=strncat(m,n,5);//adding n in m for the 1st time using function in ncat variable
    cout<<"Addition of m & n in m for 5 letters using just m : "<<m<<endl;
    cout<<"Addition of m & n in m for 5 letters using variable : "<<ncat<<endl;
    cout<<"Addition of m & n in m for 5 letters using function : "<<strncat(m,n,5)<<endl;//adding n in m for the 2nd time using just the function
    cout<<"Addition of m & n in m for 5 letters using variable for the 2nd time : "<<ncat<<endl;//as the function has been called 2 times before, now ncat variable stores the last time called m; which means it stores 2 times added n in m
    cout<<"Whereas n is unchanged : "<<n<<endl<<endl;

   float cmp=strcmp(o,p);
    cout<<"ASCII value difference of case sensitive o & p (o-p) using function : "<<strcmp(o,p)<<endl;
    cout<<"ASCII value difference of case sensitive o & p (o-p) using variable : "<<cmp<<endl<<endl;

    float ncmp= strncmp(o,p,9);
    cout<<"ASCII value difference of case sensitive o & p (o-p) for 9 letters using function : "<<strncmp(o,p,9)<<endl;
    cout<<"ASCII value difference of case sensitive o & p (o-p) for 9 letters using variable : "<<ncmp<<endl<<endl;

    float icmp=stricmp(p,q);
    cout<<"ASCII value difference of case insensitive p & q (p-q) using function : "<<stricmp(p,q)<<endl;
    cout<<"ASCII value difference of case insensitive p & q (p-q) using variable : "<<icmp<<endl<<endl;

    float nicmp=strnicmp(p,q,5);
    cout<<"ASCII value difference of case insensitive p & q (p-q) for 5 letters using function : "<<strnicmp(p,q,5)<<endl;
    cout<<"ASCII value difference of case insensitive p & q (p-q) for 5 letters using variable : "<<nicmp<<endl<<endl;

    char *cpy=strcpy(a,y);
    cout<<"Before applying the string library function, y = "<<y<<endl;
    cout<<"Copy of y in a using function : "<<strcpy(a,y)<<endl;
    cout<<"Copy of y in a using just a : "<<a<<endl;
    cout<<"Copy of y in a using variable : "<<cpy<<endl;
    cout<<"Whereas y is unchanged : "<<y<<endl<<endl;

    char *ncpy=strncpy(a1,y,8);
    cout<<"Copy of 8 letters of y in a1 using function : "<<strncpy(a1,y,8)<<endl;
    cout<<"Copy of 8 letters of y in a1 using just a1 : "<<a1<<endl;
    cout<<"Copy of 8 letters of y in a1 using variable : "<<ncpy<<endl;
    cout<<"Whereas y is unchanged : "<<y<<endl<<endl;

    char *upr=strupr(up);
    cout<<"up in upper case using function : "<<strupr(up)<<endl;
    cout<<"up in upper case using just up : "<<up<<endl;
    cout<<"up in upper case using variable : "<<upr<<endl<<endl;

    char *lwr=strlwr(low);
    cout<<"low in lower case using function : "<<strlwr(low)<<endl;
    cout<<"low in lower case using just low : "<<low<<endl;
    cout<<"low in lower case using variable : "<<lwr<<endl<<endl;

    char c='e';
    char *ch1= strchr(o,'e');
    char *ch2= strchr(o,c);
    cout<<"Printing from '"<<c<<"' in o using function & character : "<<strchr(o,'e')<<endl;
    cout<<"Printing from '"<<c<<"' in o using function & character variable : "<<strchr(o,c)<<endl;
    cout<<"Printing from '"<<c<<"' in o using pointer variable & character : "<<ch1<<endl;
    cout<<"Printing from '"<<c<<"' in o using pointer variable & character variable : "<<ch2<<endl<<endl;

    char *str= strstr(p,o);
    cout<<"Searching full o in p using function : "<<strstr(p,o)<<endl;
    cout<<"Searching full o in p using variable : "<<str<<endl;

    return 0;
}
