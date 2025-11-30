#include <iostream>
using namespace std;

void bruteforce(int arr[][4], int n) // expects square matrix with 4 columns
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            else if (j == n - i - 1)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << sum << endl;
}

void optimized(int arr[][4], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i][i];
        if(i != n-i-1)
        {
            sum+=arr[i][n-i-1];
        }
    }
    cout << sum << endl;
}

int main()
{
    int n = 4;
    int m = 4;
    int arr[4][4] =  {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };
    bruteforce(arr, n);
    optimized(arr,n);

    return 0;
}
