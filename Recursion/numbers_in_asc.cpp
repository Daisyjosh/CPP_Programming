#include <iostream>
using namespace std;

int print_asc(int n)
{
    if(n==0)
    {
        return;
    }
    print_asc(n-1);
    cout << n << " ";
}

int main()
{
    print_asc(5);
    return 0;
}