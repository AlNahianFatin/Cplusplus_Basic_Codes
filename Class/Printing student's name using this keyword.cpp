#include<iostream>
#include<string>
using namespace std;
class student
{
public :
    string name;
    student(string name)
    {
        this->name=name;
    }
    void display()
    {
        cout<<name<<endl;
    }
};
int main()
{
    student s1("Fatin");
    s1.display();
    return 0;
}
