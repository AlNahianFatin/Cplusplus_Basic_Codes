#include<iostream>
using namespace std;

int main()
{
    string word, vowels;
    cout << "Enter a word : ";
    cin >> word;

    char ch;
    for(int i = 0; i < word.length(); i++)
    {
        ch = tolower(word[i]);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            bool alreadyExists = false;
            for(int j = 0; j < vowels.length(); j++)
            {
                if(tolower(vowels[j]) == ch)
                {
                    alreadyExists = true;
                    break;
                }
            }

            if(!alreadyExists)
                vowels += word[i];
        }
    }

    if(vowels.length() == 0)
        cout << "There are no vowels in the word!" << endl;
    else
    {
        int lastVowelIndex = vowels.length() - 1;
        cout << "The vowels are ";
        for(int j = 0; j < vowels.length(); j++)
        {
            if (j != lastVowelIndex)
                cout << "'" << vowels[j] << "', ";
            else
                cout << "'" << vowels[j] << "' ";
        }
    }
}
