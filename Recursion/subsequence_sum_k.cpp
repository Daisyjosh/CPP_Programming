#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printF(int idx, vector<int> &ds,int s,int sum, int *arr, int n)
{
    if(idx == n)
    {
        if(s == sum)
        {
            for(auto it: ds)
            {
                cout << it << " ";
            }
        }
        cout << endl;
        return;
    }

    // take or pick the particular index into the subsequence.
    ds.push_back(arr[idx]);
    s += arr[idx];
    printF(idx+1,ds,s,sum,arr,n);
    s-= arr[idx];
    ds.pop_back();
    // Not pick or not take 
    printF(idx+1,ds,s,sum,arr,n);
}

int main()
{
    int arr[3] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printF(0,ds,0,sum,arr,n);
    return 0;
}