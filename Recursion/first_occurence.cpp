#include <iostream>
#include <vector>
using namespace std;

int first_occurence(vector<int>& arr, int i, int target)
{
    int n = arr.size();
    if(i == n)
    {
        return -1;
    }
    if(arr[i] == target)
    {
        return i;
    }
    return first_occurence(arr,i+1,target);
}

int main()
{
    vector<int> arr = {1,2,2,3,4,4,5,3};
    int target = 3;
    int result = first_occurence(arr,0,target);
    cout << result << endl;
    return 0;
    
}