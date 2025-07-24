#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    student(int x, double y)
    {
        id=x;
        gpa=y;
        cout<<id<<" "<<gpa<<" using constructor."<<endl;
    }
    void display()
    {
        cout<<id<<" "<<gpa<<" using function."<<endl;
    }
};
int main()
{
    student alim(1012,3.44);
    alim.display();
    student suparna(1045,3.48);
    student robin(1048,3.4);
    robin.display();
    suparna.display();
    return 0;
}
