#include<iostream>
using namespace std;
int main()
{
    int n, countPos=0, countNeg=0, countEven=0, countOdd=0;

    cout<<"Enter how many numbers you want to calculate : ";
    cin>>n;
    cout<<endl;
    int numbers[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Enter integer number "<<i+1<<" : ";
        cin>>numbers[i];
    }

    for(int i=0; i<n; i++)
    {
        if(numbers[i]>0)
        {
            countPos++;
        }
        else
        {
            countNeg++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(numbers[i]>0)
        {
            if(numbers[i]%2==0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
        else
        {
            continue;
        }
    }

    cout<<"\nTotal positive numbers : "<<countPos<<endl;
    cout<<"Total negative numbers : "<<countNeg<<endl;
    cout<<"Total even numbers : "<<countEven<<endl;
    cout<<"Total odd numbers : "<<countOdd<<endl;

}
