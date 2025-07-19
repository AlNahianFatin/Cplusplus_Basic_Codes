#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int b;
    int w;
};

double fractionalKnapsack(int W, Item arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if((double)arr[j].b / arr[j].w < (double)arr[j + 1].b / arr[j + 1].w)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    int x = 0;
    double res = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (x + arr[i].w <= W)
        {
            x += arr[i].w;
            res += arr[i].b;
        }
        else
        {
            int remain = W - x;
            res += arr[i].b * ((double) remain / arr[i].w);
            break;
        }
    }
    return res;
}

int main()
{
    int W = 16;
    Item arr[] = {{6, 6}, {2, 10}, {1, 3}, {8, 5}, {3, 1}, {5, 3}};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum possible benefit is = " << fractionalKnapsack(W, arr, n) << endl;
    return 0;
}
