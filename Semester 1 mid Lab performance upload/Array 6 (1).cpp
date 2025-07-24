#include<iostream>
using namespace std;
int main()
{
    char word[25];
    cout<<"Enter a word: ";
    cin>>word;
    for(int i=0;i<25;i++)
    {
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
        {
            cout<<word[i]<<" ";
        }
        else
        {
            continue;
        }
    }
    return 0;
}
