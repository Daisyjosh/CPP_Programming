#include <iostream>
//cleared
using namespace std;

void count_sort(int arr[], int n)
{
    int freq[100000];
    int min_val = INT_MAX, max_val = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        min_val = min(min_val,arr[i]);
        max_val = max(max_val,arr[i]);
    }

    for(int i = 0; i < n; i++) //O(n)
    {
        freq[arr[i]]++;
    }
    for(int i = min_val, j = 0; i <= max_val; i++) // O(range)
    {
        while(freq[i] > 0) 
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    for(int i = 0; i < n; i++) // printing the sorted array
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(arr)/sizeof(int);
    count_sort(arr,n);
    return 0;
}