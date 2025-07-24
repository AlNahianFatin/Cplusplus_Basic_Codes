#include <iostream>
using namespace std;

void addition (int, int);
void subtraction (int, int);
void multiplication (int, int);
void division (int, int);

 int main()
 {
     addition(10,3);
     subtraction(10,3);
     multiplication(10,3);
     division(10,3);

     cout<<"\nAll functions have been called."<<endl;
 }

 void addition(int a,int b)
 {
     int sum = a + b;
     cout<<"Sum = "<<sum<<endl;
 }
 void subtraction(int a,int b)
 {
     int result = a - b;
     cout<<"Subtraction = "<<result<<endl;
 }
 void multiplication(int a,int b)
 {
     int result = a * b;
     cout<<"Multiplication = "<<result<<endl;
 }
 void division(int a,int b)
 {
     double result = (double) a / b;
     cout<<"Division = "<<result<<endl;
 }
