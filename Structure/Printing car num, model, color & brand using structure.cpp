#include<iostream>
using namespace std;
struct car
{
    string num;
    string model;
    string color;
    string brand;
};
int main()
{
    car c1;
    c1.num="HP 125D";
    c1.model="h510";
    c1.color="Sky blue";
    c1.brand="BMW";

    car c2;
    c2.num="DHAKA 894P";
    c2.model="A100";
    c2.color="Black";
    c2.brand="Rolls Royace";

    car c3;
    c3.num="Bog 7845P";
    c3.model="PD150";
    c3.color="Navy blue";
    c3.brand="Ferrari";

    cout<<"1st car number "<<c1.num<<", car model "<<c1.model<<", color "<<c1.color<<" and brand "<<c1.brand<<endl;
    cout<<"2nd car number "<<c2.num<<", car model "<<c2.model<<", color "<<c2.color<<" and brand "<<c2.brand<<endl;
    cout<<"3rd car number "<<c3.num<<", car model "<<c3.model<<", color "<<c3.color<<" and brand "<<c3.brand<<endl;
}
