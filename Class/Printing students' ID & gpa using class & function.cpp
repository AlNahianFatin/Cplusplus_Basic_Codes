#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }
};
int main()
{
    student alim,suparna;
    alim.id=1012;
    alim.gpa=3.44;
    alim.display();

    suparna.id=1045;
    suparna.gpa=3.48;
    suparna.display();

    student robin;
    robin.id=1042;
    robin.gpa=3.4;
    cout<<"Robin's ID is "<<robin.id<<" & gpa is "<<robin.gpa<<endl;
    return 0;
}
