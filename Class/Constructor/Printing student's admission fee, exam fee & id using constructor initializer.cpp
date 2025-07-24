#include<iostream>
using namespace std;
class student
{
public:
    const int admissionFee, examFee;
    int id;
    student (int x,int y, int z)
    : admissionFee(x), examFee(y)
    {
        cout<<"The student's admission fee is "<<admissionFee<<endl;
        cout<<"The student's exam fee is "<<examFee<<endl;
        id=z;
        cout<<"The student's id is "<<id<<endl;

    }
};
int main()
{
    student s1(15000,2500,1001);
    return 0;
}
