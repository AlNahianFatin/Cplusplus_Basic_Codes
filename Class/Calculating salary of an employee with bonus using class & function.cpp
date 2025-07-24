#include<iostream>
using namespace std;
class Employee
{
public:
    double Sal;
    int Work_hour;
    void SetInfo(double sal,int work_hour)
    {
        Sal=sal;
        Work_hour=work_hour;
    }
    void AddSal()
    {
        if(Sal<500)
        {
            Sal+=10;
        }
    }
    void AddWork()
    {
        if(Work_hour>6 && Work_hour<=24)
        {
            Sal+=5;
        }
    }
    void ShowInfo()
    {
        cout<<"The number of hours of work per day is "<<Work_hour<<" and his salary is "<<Sal<<endl;
    }
};
int main()
{
    Employee Emp1;
    double sal;
    int work_hour;
    cout<<"Enter the current salary of the employee: ";
    cin>>sal;
    cout<<"Enter the number of hours of work per day of the employee: ";
    cin>>work_hour;
    Emp1.SetInfo(sal,work_hour);
    Emp1.AddSal();
    Emp1.AddWork();
    Emp1.ShowInfo();
    return 0;
}
