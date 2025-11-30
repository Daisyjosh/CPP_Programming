#include <iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i =0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SelectionSort(int arr[], int n)
{
    for(int i = 0; i <n- 1; i ++)
    {
        int min_idx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_idx])
            //if(arr[j] > arr[min_idx]) for descending order.
            {
                min_idx = j;
            }

        }
        swap(arr[i],arr[min_idx]);
    }
    print(arr,n);
}

int main()
{
    int arr[5] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    SelectionSort(arr,n);
    return 0;
}