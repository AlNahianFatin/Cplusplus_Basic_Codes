#include<iostream>
#include<string>
using namespace std;

class Book
{
private:
    string BookTitle;
    string AuthorName;
    string Publisher;
    int YearOfPublication;
    double Price;
public:
    Book(string title, string author, string publisher, int year, double price)
    {
        BookTitle = title;
        AuthorName = author;
        Publisher = publisher;
        YearOfPublication = year;
        Price = price;
    }
    void setBookTitle (string title)
    {
        BookTitle = title;
    }
    string getBookTitle()
    {
        return BookTitle;
    }

    void setAuthorName (string author)
    {
        AuthorName = author;
    }
    string getAuthorName()
    {
        return AuthorName;
    }

    void setPublisher (string publisher)
    {
        Publisher = publisher;
    }
    string getPublisher()
    {
        return Publisher;
    }

    void setYearOfPublication (int year)
    {
        YearOfPublication = year;
    }
    int getYearOfPublication()
    {
        return YearOfPublication;
    }

    void setPrice (int price)
    {
        Price = price;
    }
    float getPrice()
    {
        return Price;
    }

    void displayBookDetails()
    {
        cout<<"Book title: "<<BookTitle<<endl;
        cout<<"Author name: "<<AuthorName<<endl;
        cout<<"Publisher: "<<Publisher<<endl;
        cout<<"Year of publication: "<<YearOfPublication<<endl;
        cout<<"Price: "<<Price<<endl;
    }
    float getPriceWithDiscount()
    {
        return Price - Price * 0.05;
    }
};

int main()
{
    Book Book1 ("Opekkha", "Humayun Ahmed", "Onnesha Publications", 1995, 300);
    Book1.displayBookDetails();
    cout<<"\nPrice of the book with discount is "<<Book1.getPriceWithDiscount()<<"."<<endl;
    return 0;
}
