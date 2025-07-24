#include<iostream>
using namespace std;
class Distance // class
{
private://access modifier
    int feet;
    float inches;//member data
public:
    void
    setdist (int ft, float in)//set Distance to args
    {
        feet = ft;
        inches = in;
    }
    void
    getdist () //get length from user
    {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<< "Enter inches: ";
        cin>>inches;
    }
    void
    showdist () //display distance
    {
        cout<< feet << "ft " << inches << " inch";
    }
};//end of class
int main()
{
    Distance dist1, dist2; //define two lengths
    dist1.setdist(11, 6.25); //set dist1
    dist2.getdist(); //get dist2 from user
    //display lengths
    cout<< "dist1 = ";
    dist1.showdist();
    cout<< endl;
    cout<< "dist2 = ";
    dist2.showdist();
    cout<< endl;
    return 0;
}
