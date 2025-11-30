#include <iostream>
#include <cmath>
using namespace std;


bool prime(int n)
{
    bool isPrime = true;
    for(int i = 2; i<= sqrt(n);i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;

        }
        
    }
    return isPrime;

}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << prime(n);
    return 0;

    

}