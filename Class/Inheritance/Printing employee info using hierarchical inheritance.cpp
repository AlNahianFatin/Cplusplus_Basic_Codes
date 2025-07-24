#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
    string Name;
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
    void display_information()
    {
        cout<< "Name :"<< Name<< endl;
        cout<< "Company: "<< Company<< endl;
        cout<< "Age: "<< Age<<endl;
    }
    Employee()
    {

    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
class FullTimeEmployee: Employee
{
public:
    double FestivalBonus;
    FullTimeEmployee()
    {

    }
    FullTimeEmployee(string name, string company, int age, double festivalBonus):Employee(name,company,age)
    {
        FestivalBonus = festivalBonus;
    }
    void Display_bonus()
    {
        cout<<endl;
        display_information();
        cout<<getName() << " will get festival Bonus: " << FestivalBonus<<endl;
    }
};
class PartTimeEmployee:Employee
{
public:
    double HourlyWage;
    PartTimeEmployee()
    {

    }
    PartTimeEmployee(string name, string company, int age, double hw): Employee(name,company,age)
    {
        HourlyWage = hw;
    }
    void weeklySalary()
    {
        cout<<endl;
        display_information();
        double Weekly_Salary = HourlyWage*20;
        cout<<getName()<< " will get "<< Weekly_Salary << " per Week."<<endl;
    }
};
int main()
{
    Employee e1 = Employee("Alex", "Daraz", 30);
    e1.display_information();
    FullTimeEmployee f1("Alice", "Daraz", 29, 25000);
    f1.Display_bonus();
    ///f1.display_information(); not possible as the function is declared in super class, not in the sub classes
    PartTimeEmployee p1 ("Bob", "Daraz", 32, 500);
    p1.weeklySalary();
    return 0;
}
