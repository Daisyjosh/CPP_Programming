#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void printF(int idx, vector<int> &ds, int *arr, int n)
{
    if(idx == n)
    {
        for(auto it: ds)
        {
            cout << it << " ";
        }
        if(ds.size()==0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // take or pick the particular index into the subsequence.
    ds.push_back(arr[idx]);
    printF(idx+1,ds,arr,n);
    ds.pop_back();
    // Not pick or not take 
    printF(idx+1,ds,arr,n);
}

int main()
{
    int arr[3] = {3,2,1};
    int n = 3;
    vector<int> ds;
    printF(0,ds, arr, n);
    return 0;
}