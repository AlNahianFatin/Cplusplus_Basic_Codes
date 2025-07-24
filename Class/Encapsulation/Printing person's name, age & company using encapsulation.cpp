#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
    string Name;
private:
    string Company;
    int Age;
public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        Age = age;
    }
    int getAge()
    {
        return Age;
    }
};
int main()
{
    Employee e1;
    e1.setName("Mr. Ahmed");
    e1.setAge(25);
    e1.setCompany("Daraz");
    cout<<"Name: "<<e1.getName()<<endl;
    cout<<"Age: "<<e1.getAge()<<endl;
    cout<<"Company: "<<e1.getCompany()<<endl;
    return 0;
}
