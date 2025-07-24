#include<iostream>
using namespace std;

void sum (int x, float y)
{
    float add = x+y;
    cout<<x<<" + "<<y<<" = "<<add<<endl<<endl;
}

void sum (double x, double y, int z)
{
    double add = x+y+z;
    cout<<x<<" + "<<y<<" + "<<z<<" = "<<add<<endl<<endl;
}

void sum (int x, double y, float z)
{
    float add = x+y+z;
    cout<<x<<" + "<<y<<" + "<<z<<" = "<<add;
}

int main()
{
    sum(10.5, 20.1);
    sum(10.5, 20.3, 30.895);
    sum(10.5, 12.32, 2.96);
    return 0;
}
