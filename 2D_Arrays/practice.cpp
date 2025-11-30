#include <iostream>
using namespace std;

int practice1(int arr[][4],int n, int m)
{
    //print all the 7s in the 2D Array (count)
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == 7)
            {
                count += 1;
            }
        }
    }
    return count; //4

}

int practice2(int arr[][4],int n, int m)
{
    //Printoutthesumofthenumbersinthesecondrowofthe“nums”array.
    //[1][n-1]
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[1][i];
    }
    return sum;//25
}
void practice3(int arr[4][4], int n, int m)
{
    //Transpose Matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,7},
        {8,9,7,8},
        {0,9,8,7}
    };
    cout << "The number of 7s present in this 2D array is: " << practice1(arr,4,4) << endl;
    cout << "The sum of the elements present in the second row of the 2D Array is: " << practice2(arr,4,4) << endl;
    practice3(arr,4,4);
    return 0;
}