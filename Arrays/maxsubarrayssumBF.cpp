#include <iostream>

using namespace std;

void Maximum_sum_subarrays_BF(int *arr,int n)
{
    int max_sum = 0;
    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            int current_sum = 0;
            
            for(int i = start; i <= end; i++)
            {
                
                current_sum += arr[i];
                
                


            }
            cout << current_sum << ",";
            // if (current_sum > max_sum)
            // {
            //     max_sum = current_sum;

            // }
            max_sum = max(current_sum,max_sum);
            

            
        }
        
        cout << endl;
    }
    cout << "The max subarray sum is : " <<  max_sum;

}



int main()
{
    int arr[6] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    Maximum_sum_subarrays_BF(arr,n);
    return 0;

}