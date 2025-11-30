#include <iostream>
using namespace  std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int start = 0, end = n-1;
    
    while(start < end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start],arr[end]);
        start++;
        end--;


    }
    for(int i = 0; i<n;  i++)
    {
        cout << arr[i] << ",";

    }
    cout << endl;
    return 0;
}