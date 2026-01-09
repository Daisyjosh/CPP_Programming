#include <iostream>
using namespace std;

//  Recursive function
void func()
{
    cout << "function call...work\n";
    func(); // Function calls itself.
    return; // Base case 
}

int main()
{
    func();
    return 0;
}