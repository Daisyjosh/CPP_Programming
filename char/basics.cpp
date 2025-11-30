#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // char ch = 'f';
    // int position = ch - 'a'; // formula to find the position;
    // char ch1 = 'F';
    // int position1 = ch1 - 'A';
    // cout << position << "==" << position1 << endl;
    // char chh[50] = {'c','o','d','e','\0'};
    // cout << strlen(chh) << endl;
    //input
    //method 1 cin
    char ch[50];
    cin >> ch;
    cout << "The string is " << ch << endl;
    cout << "The length of the string is " << strlen(ch) << endl;

    
    return 0;
}