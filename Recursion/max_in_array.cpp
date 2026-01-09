// Find the Maximum Element in an array

#include <iostream>
using namespace std;

int max_element(int *arr, int n,int i)
{
    if(i == n-1)
    {
        return arr[i];
    }
    int max_ele = max_element(arr,n,i+1);
    if (arr[i] > max_ele)
    {
        return arr[i];
    }
    else{
        return max_ele;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int result = max_element(arr,6,0);
    cout << result  << endl;
    return 0;
}