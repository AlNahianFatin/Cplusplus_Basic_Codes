#include<iostream>
#include<string>
using namespace std;
class person
{
public :
    string name;
    int age;
    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
class student : public person
{
    //name, age, display1() included now
public:
    int id;
    void display2()
    {
        display1();
        cout<<"ID : "<<id<<endl;
    }
};
int main()
{
    person p1;
    student s1;
    p1.name="Anisul";
    p1.age=27;
    s1.name="Fatin";
    s1.age=21;
    s1.id=50884;
    p1.display1();
    cout<<endl;
    s1.display2();
    return 0;
}
