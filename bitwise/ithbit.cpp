#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the ith value: ";
    cin >> i;
    int mask = 1 << i;
    if(n & mask)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}