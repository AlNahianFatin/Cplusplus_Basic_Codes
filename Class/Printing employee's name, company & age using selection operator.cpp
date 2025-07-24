#include<iostream>
using namespace std;
class employee
{
public:
    string name, company;
    int age;
    void display()
    {
        cout<<"Employee name: "<<name<<endl<<"Company name: "<<company<<endl<<"Age: "<<age<<endl;
    }
};
int main()
{
    employee e1, *p=&e1;
    e1.name="Abul";
    e1.company="eBay";
    e1.age=37;
    p->display();
    return 0;
}
