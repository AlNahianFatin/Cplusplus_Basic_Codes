#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display(int x,double y)
    {
        id=x;
        gpa=y;
        cout<<"ID is "<<id<<" & gpa is "<<gpa<<endl;
    }
};
int main()
{
    student alim,suparna;
    cout<<"Alim's ";
    alim.display(1012,3.44);

    cout<<"Suparna's ";
    suparna.display(1045,3.48);

    student robin;
    robin.id=1042;
    robin.gpa=3.4;
    cout<<"Robin's ID is "<<robin.id<<" & gpa is "<<robin.gpa<<endl;
    return 0;
}

