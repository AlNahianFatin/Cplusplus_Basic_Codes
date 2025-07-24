#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int id;
    float cgpa;
};
int main()
{
    struct student s2;
    cout<<"Enter name ";
    cin>>s2.name;
    cout<<"Enter ID ";
    cin>>s2.id;
    cout<<"Enter CGPA ";
    cin>>s2.cgpa;
    cout<<s2.name<<" "<<s2.id<<" "<<s2.cgpa;
}
