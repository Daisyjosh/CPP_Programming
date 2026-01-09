#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    vector<int> ans;
    while(start < end)
    {
        int curr_sum = arr[start] + arr[end];
        if(curr_sum == target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(curr_sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr= {2,7,11,15};
    int target = 9;
    vector<int> res = pairsum(arr,target);
    cout << res[0] << "," << res[1] << endl;
    return 0;

}