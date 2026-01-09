#include <iostream>
#include <vector>
using namespace std;

int last_occurence(vector<int>& arr, int i, int target)
{
    if(i < 0)
    {
        return -1;
    }
    if(arr[i] == target)
    {
        return i;
    }
    return last_occurence(arr,i-1,target);
}

int main()
{
    vector<int> arr = {1,2,3,4,4,5,3};
    int target = 3;
    int n = arr.size();
    int result = last_occurence(arr,n-1,target);
    cout << result << endl;
    return 0;
}