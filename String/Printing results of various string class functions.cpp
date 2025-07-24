#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="Al Nahian";
    string str2=" Fatin";
    string str3;

    str3=str1;
    cout<<"Copying str1 in str3 : "<<str3<<endl<<endl;

    str3.clear();
    cout<<"Using str3, clearing str3 : "<<str3<<endl<<endl;

    str3=str1+str2;
    cout<<"Using str3 variable, str1 + str2 = "<<str3<<endl;
    cout<<"Using equation, str1 + str2 = "<<str1+str2<<endl<<endl;

    str1.append(str2);
    cout<<"Using just str1 for append function, str1 + str2 = "<<str1<<endl;
    cout<<"Using append function, str1 + str2 = "<<str1.append(str2)<<endl;
    cout<<"Using just str1 for append function for the 2nd time, str1 + str2 = "<<str1<<endl;
    cout<<"Whereas str2 is unchanged : "<<str2<<endl<<endl;

    int len= str1.size();
    cout<<"Using variable, length of str1 now = "<<len<<endl;
    cout<<"Using function, length of str1 now = "<<str1.size()<<endl<<endl;

    return 0;
}
