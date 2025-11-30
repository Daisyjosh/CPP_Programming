#include <iostream>
using namespace std;

int binarysearch(int *arr,int n,int key)
{
    int start = 1, end = n - 1;
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int arr2[] = {1,2,3,4,5,6,7};
    int n1 = sizeof(arr)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    cout << "Enter first search element in array 1: ";
    int key1, key2;
    cin >> key1;
    cout << "Enter second search element in array 2: ";
    cin >> key2;
    cout << "The index of the searched element in array 1: ";
    cout << binarysearch(arr,n1,key1) << endl;
    cout << "The index of the searched element in array 2: ";
    cout << binarysearch(arr2,n2,key2) << endl;
    return 0;

}