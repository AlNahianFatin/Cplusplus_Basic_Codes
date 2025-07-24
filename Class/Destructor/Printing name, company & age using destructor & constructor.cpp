#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
    string name, company;
    int age;
    void display()
    {
        cout<<"\nPrinting from the display function:"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Age: "<<age<<endl;
    }
    Employee(string Name, string Company, int Age)
    {
        name=Name;
        company=Company;
        age=Age;
        cout<<"Printing from the parameterized constructor:"<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Age: "<<Age<<endl<<endl;
    }
    Employee()
    {
        cout<<"Printing from the default constructor."<<endl;
    }
    ~Employee()
    {
        cout<<"\nPrinting from the destructor."<<endl;
    }
};
int main()
{
    Employee e1("Mr Abul", "eBay", 45);
    e1.display();

    Employee e3, e2;
    e3.name = "Mr Habul";
    e3.company= "alibaba";
    e3.age = 43;
    e3.display();
    e2.name = "Mr Kabul";
    e2.company= "UriBaba";
    e2.age = 35;
    e2.display();
    return 0;
}
