#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int count_ss(int idx, vector<int> &arr,int s, int target)
{
    if(idx >= arr.size())
    {
        if(s == target)
        {
            return 1;
        }
        return 0;
    }

    s += arr[idx];

    int l = count_ss(idx+1,arr,s,target);

    s -= arr[idx];

    int r = count_ss(idx+1,arr,s,target);

    return l+r;
}

int main()
{
    vector<int> arr = {1,2,1};
    int target = 2;
    cout << count_ss(0,arr,0,target);
    return 0;
}