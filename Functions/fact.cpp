#include <iostream> // input output stream
using namespace std;
 
int fact(int n)
{
    int fact = 1;
    for(int i = n; i > 0; i--)
    {
        fact = fact * i;

    }
    return fact;
}


int main()
{
    int n;
    cout << "Enter a number to find the factorial: ";
    cin >> n;
    int result = fact(n);
    cout << "The factorial of the number " << n << " is: " << result << endl;
    return 0;
}
