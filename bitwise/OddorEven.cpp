#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >>n;
    if(!(n&1))
    {
        cout << "The given number is an EVEN number" << endl;
    }
    else{
        cout << "The given number is an ODD number" << endl;
    }
    return 0;
}