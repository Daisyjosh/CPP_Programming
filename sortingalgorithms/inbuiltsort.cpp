#include <iostream>
#include <algorithm>
using namespace std;
// in-built sorting method in c++
int main()
{
    int arr[8] = {4,5,6,7,8,1,2,3};
    //syntax for ascending order sort(start,end)
    sort(arr,arr+8);
    for(int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    //we can sort between ranges aswell
    sort(arr+2,arr+8);
    for(int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // syntax for descending order sort(start,end,greater<int>())
    sort(arr,arr+8,greater<int>());
    for(int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}