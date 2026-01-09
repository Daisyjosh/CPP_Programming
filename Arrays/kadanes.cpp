#include <iostream>
using namespace std;
void print_max_sum(int *arr,int n)
{
    int current_sum = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        current_sum+=arr[i];
        max_sum = max(current_sum,max_sum);
        if(current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << max_sum << endl;

}

int main()
{
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);
    print_max_sum(arr,n);
    return 0;
}