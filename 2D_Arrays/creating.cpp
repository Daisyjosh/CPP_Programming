#include <iostream>
using namespace std;

int main()
{
    int arr[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };



    
    // how to print an 2d array
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }
    // Declaring an array from scratch

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int m;
    cout << "Enter the number of columns: ";
    cin >> m;
    int arr1[n][m];   
    //Getting input from the user..
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }

    }

    //printing the array
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    

    return 0;
}