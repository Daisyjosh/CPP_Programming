#include <iostream>
using namespace std;

int bintodec(int n)
{
    int num = n, dec = 0;
    int pow = 1;

    while(n > 0)
    {
        int last_digit = n % 10;
        dec += last_digit * pow;
        pow = pow * 2;

        n = n / 10;
    }
    return dec;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << bintodec(n);
    return 0;
}