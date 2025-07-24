#include<iostream>
using namespace std;
void circle (double r)
{
    cout<<"The circumference of the circle is = "<<2*3.1416*r<<endl;
    cout<<"The area of the circle is = "<<3.1416*r*r<<endl;
}
void triangle (double b, double h)
{
    cout<<"The area of the triangle is = "<<0.5*b*h<<endl;
}
void trapezoid (double a, double b, double h)
{
    cout<<"The area of the trapezoid is = "<<0.5*(a+b)*h<<endl;
}
void rectangle (double a, double b)
{
    cout<<"The area of the rectangle is = "<<a*b<<endl;
}
void square (double a)
{
    cout<<"The area of the square is = "<<a*a<<endl;
}
int main()
{
    double r,b,h1,a1,b1,h2,a2,b2,x;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    circle(r);
    cout<<"\nEnter the base of the triangle : ";
    cin>>b;
    cout<<"Enter the height of the triangle : ";
    cin>>h1;
    triangle(b,h1);
    cout<<"\nEnter the two parallel sides of the trapezoid : ";
    cin>>a1;
    cout<<"Enter the two parallel sides of the trapezoid : ";
    cin>>b1;
    cout<<"Enter the height of the trapezoid : ";
    cin>>h2;
    trapezoid(a1,b1,h2);
    cout<<"\nEnter the two sides of the rectangle : ";
    cin>>a2;
    cout<<"Enter the two sides of the rectangle : ";
    cin>>b2;
    rectangle(a2,b2);
    cout<<"\nEnter the side of the square : ";
    cin>>x;
    square(x);
    return 0;
}
