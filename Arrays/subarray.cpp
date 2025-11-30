#include <iostream>
using namespace std; 

void print_index_subarrays(int *arr, int n)
{
    cout << "The indices of the subarrays are as follows \n";
    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            cout << "(" << start << ","  << end << ")" << " ";
        }
        cout << endl;
    }
}

void print_subarrays(int *arr,int n)
{
    cout << "The subarrays are as follows: \n";
    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            for(int i = start; i <=end; i++)
            {
                cout << arr[i];
            }
            cout << "," << " ";
           
        }
        cout << endl;
    }

}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    print_index_subarrays(arr,n);
    print_subarrays(arr,n);
    return 0;
}