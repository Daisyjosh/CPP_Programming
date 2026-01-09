#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int i = 1; i <n;i++)
    {
        if(arr[i] <= arr[i-1])
        {
            arr[i] = arr[i-1]+1;
        }
    }

    int total = 0;
    for(int i =0; i<n;i++)
    {
        total += arr[i];
    }
    cout << "The total is " << total << endl;
    return 0;
    
}