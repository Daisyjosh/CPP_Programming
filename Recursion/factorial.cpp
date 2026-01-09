#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0) // Base Case
    {
        return 1;
    }
    return n * factorial(n-1); // Recursive function
}

int main()
{
    int n;
    cout << "Enter n to find factorial";
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}