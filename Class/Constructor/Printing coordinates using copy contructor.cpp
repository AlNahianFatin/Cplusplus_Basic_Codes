#include<iostream>
using namespace std;
class Point
{
private:
    int x, y;
public:
    Point()//default constructor
    {
        cout<<"Default constructor is called to construct the object."<<endl;
    }
    Point(const int &xValue, const int &yValue)//parameterized constructor
    {
        x=xValue;
        y=yValue;
        cout<<"Parameterized constructor is called to construct the object."<<endl;
    }
    Point (const Point &pointObj)//copy constructor
    {
        x=pointObj.x;
        y=pointObj.y;
        cout<<"Copy constructor is called to construct the object."<<endl;
    }
    void Print()
    {
        cout<<"X-coordinate of point is : "<<x<<endl;
        cout<<"X-coordinate of point is : "<<x<<endl;
    }
};
int main()
{
    Point p1;//default constructor
    Point p2(10,20);//parameterized constructor
    Point cp(p2);//copy constructor
    cout<<"Print p1: "<<endl;
    p1.Print();
    cout<<"Print p2: "<<endl;
    p2.Print();
    cout<<"Print cp: "<<endl;
    cp.Print();
}
