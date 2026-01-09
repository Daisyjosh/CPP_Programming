#include <iostream>
using namespace std;

int linearsearch(int *arr,int n, int key)
{

    for(int i = 0; i<n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1,2,3,4,5,4,7,8};
    int n = sizeof(arr) / sizeof(int);
    int key = 0;
    cout << "Enter the value to search: ";
    cin >> key;
    int result = linearsearch(arr,n,key);
    cout << result;
    return 0;
}