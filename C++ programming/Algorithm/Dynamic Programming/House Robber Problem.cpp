#include<iostream>
using namespace std;

int maxSurveys(int arr[], int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return arr[0];

    int dp[n];
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i-1], arr[i] + dp[i-2]);
    }
    return dp[n-1];
}

int main()
{
    int arr[] = {2, 7, 1, 5, 1, 10, 17, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum number of possible surveys with residents: " << maxSurveys(arr, n) << endl;

    return 0;
}
