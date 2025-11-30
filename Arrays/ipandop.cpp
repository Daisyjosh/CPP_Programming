#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<= n;i++)
    {
        cout << "Enter the arr[" << i << "]th element: ";
        cin >> arr[i];
        
    }
    cout << "The Elements of array are: " << endl;
    for(int i = 0; i<= n; i++)
    {
        
        cout << "The arr[" << i <<"] is " <<  arr[i] << endl;
    }
    return 0;
}