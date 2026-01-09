#include <iostream>

using namespace std;

void bruteforce(int arr[][4], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
            {
                if(arr[i][j] == key)
                {
                    cout << i <<  " " << j << endl;
                    return;
                }
            }
    }
    cout << -1;
}

void row_wise_binary_search(int arr[][4], int n, int key)
{

}

void col_wise_binary_search(int arr[][4], int n, int key)
{
    
}
bool staircase(int arr[][4],int n, int key)
{
    int m = n;
    int i = 0; 
    int j = m - 1;
    while(i < n && j >= 0)
    {
        if(arr[i][j] == key)
        {
            return true;
        }
        else if(arr[i][j] > key)
        {
            j--;
        }
        else{
            i++;
        }
    }
    return false;

    
}
int main()
{
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int key = 10;
    bruteforce(arr,4,key);
    row_wise_binary_search(arr,4,key);
    col_wise_binary_search(arr,4,key);
    bool result = staircase(arr,4,key);
    cout << result << endl;
    
    return 0;
}