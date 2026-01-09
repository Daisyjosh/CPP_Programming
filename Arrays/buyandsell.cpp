#include <iostream>

using namespace std;

void max_profit(int *arr, int n)
{
    int best_buy[100000];
    best_buy[0]=INT_MAX;
    for(int i = 1; i < n; i++)
    {
        best_buy[i] = min(best_buy[i-1],arr[i-1]);
        cout << best_buy[i] << "," ;

    }
    int max_profit = 0;
    for(int i = 0; i < n; i++)
    {
        int current_profit = arr[i] - best_buy[i];
        max_profit = max(max_profit,current_profit);

    }
    cout << "MAX PROFIT = " << max_profit << endl;
    cout << endl;
}

int main()
{
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(int);
    max_profit(arr,n);
    return 0;
}