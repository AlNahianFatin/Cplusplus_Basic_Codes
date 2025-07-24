#include<iostream>
using namespace std;
class student
{
private:
    static int sID;
public:
    static int incID()
    {
        ++sID;
        return sID;
    }
};
int student::sID=101;
int main()
{
    cout<<student::incID()<<endl;
    cout<<student::incID()<<endl;
    cout<<student::incID()<<endl;
}
