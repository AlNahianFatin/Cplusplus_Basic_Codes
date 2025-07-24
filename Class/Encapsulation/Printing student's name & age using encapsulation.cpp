#include<iostream>
#include<string>
using namespace std;
class student
{
private:
    int age;
    string name;
public :
    void setName(string x)
    {
        name=x;
    }
    string getName()
    {
        return name;
    }
    void setAge(int x)
    {
        age=x;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    student s1;
    s1.setName("Fatin");
    s1.setAge(21);
    cout<<"Name: "<<s1.getName()<<"  Age: "<<s1.getAge()<<endl;
    return 0;
}
