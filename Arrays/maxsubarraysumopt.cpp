#include <iostream>

using namespace std;

void max_sum_subarray_opt(int *arr,int n)
{
    int max_sum = INT_MIN;
    for(int start = 0; start < n; start++)
    {
        int cur_sum = 0;
        for(int end = start; end < n; end++)
        {
            cur_sum += arr[end];

        }
        cout << cur_sum << ",";
        max_sum = max(cur_sum,max_sum);
        
    }
    cout << endl;
    cout << "The maximum sum of subarray is: " << max_sum << endl;
}

int main()
{
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    max_sum_subarray_opt(arr,n);
    return 0;

}