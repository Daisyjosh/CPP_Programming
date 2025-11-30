#include <iostream>
using namespace std;

int largest(int a, int b, int c)
{
    if(a > b && a > c)
    {
        return a;
    }
    else if(b > a && b > c)
    {
        return b;
    }
    else{
        return c;
    }
}

int main()
{
    int a,b,c;
    cout << "Enter first value: ";
    cin >> a;
    cout << "Enter second value: ";
    cin >> b;
    cout << "Enter third value: ";
    cin >> c;
    cout << "The largest of three value is " << largest(a,b,c) << endl;
    return 0;
}