#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Ente the ith position to clear: ";
    cin >> k;
    int mask = ~(1 << k);
    cout << (n & mask) << endl;
    return 0;
}