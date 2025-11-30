#include <iostream>

using namespace std;

void BubbleSort(int *arr, int n)
{
    bool isswap = false;


    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i -1; j++)
        {
            if(arr[j] > arr[j+1])
            // if(arr[j] < arr[j+1]) to print descending order.
            {
                
                swap(arr[j],arr[j+1]);
                isswap = true;
            }
        }
        if(!isswap)
        {
            //array is already sorted.
            return;
        }
    
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;


}

int main()
{
    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr) / sizeof(int);
    BubbleSort(arr,n);
    return 0;
}