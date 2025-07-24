#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
};
int main()
{
    student alim,suparna;
    alim.id=1012;
    alim.gpa=3.44;
    cout<<"Alim's ID is "<<alim.id<<" & gpa is "<<alim.gpa<<endl;
    suparna.id=1045;
    suparna.gpa=3.48;
    cout<<"Suparna's ID is "<<suparna.id<<" & gpa is "<<suparna.gpa<<endl;
    student robin;
    robin.id=1042;
    robin.gpa=3.4;
    cout<<"Robin's ID is "<<robin.id<<" & gpa is "<<robin.gpa<<endl;
    return 0;
}
