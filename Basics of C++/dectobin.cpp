#include <iostream>
using namespace std;

int dectobin(int n)
{
    
    int pow = 1;
    int bin = 0;
    while (n > 0)
    {
        int rem = n % 2;
        bin += rem*pow;
        pow = pow * 10;
        n /= 2;
    }
    return bin;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << dectobin(n) << endl;
    return 0;
}