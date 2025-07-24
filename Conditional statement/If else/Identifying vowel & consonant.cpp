#include<iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter a letter: ";
    cin>>letter;
    letter=tolower(letter);
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U')
    {
        cout<<"This is a vowel."<<endl;
    }
    else
    {
        cout<<"This is a consonant."<<endl;
    }
    return 0;
}
