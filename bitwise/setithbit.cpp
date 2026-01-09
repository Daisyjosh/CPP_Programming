#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the ith bit to set: ";
    int k;
    cin >> k;
    int mask = 1 << k;
    cout << (n | mask) << endl;
    return 0;

}