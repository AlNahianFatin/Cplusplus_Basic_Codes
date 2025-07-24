#include<iostream>
using namespace std;
struct book
{
    string Title;
    string AuthorName;
    int ID;
    int Edition;
};
int main()
{
    book b1;
    b1.Title = "The Shining";
    b1.AuthorName = "Stephen King";
    b1.ID = 14586379;
    b1.Edition = 1;

    book b2;
    b2.Title = "Opekkha";
    b2.AuthorName = "Humayun Ahmed";
    b2.ID = 14586354649;
    b2.Edition = 10;

    book b3;
    b3.Title = "Arek Falgun";
    b3.AuthorName = "Jahir Raihan";
    b3.ID = 14585579;
    b3.Edition = 7;

    cout<<"Book 1 title "<<b1.Title<<", author's name "<<b1.AuthorName<<", ID "<<b1.ID<<" and the edition is "<<b1.Edition<<endl<<endl;

    cout<<"Book 2 title "<<b2.Title<<", author's name "<<b2.AuthorName<<", ID "<<b2.ID<<" and the edition is "<<b2.Edition<<endl<<endl;

    cout<<"Book 3 title "<<b3.Title<<", author's name "<<b3.AuthorName<<", ID "<<b3.ID<<" and the edition is "<<b3.Edition<<endl;
}
