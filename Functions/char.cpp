#include <iostream>
using namespace std;

// char next_char(char a)
// {
//     return a + 1;

// }

// int main()
// {
//     char a;
//     cout << "Enter an alphabet: ";
//     cin >> a;
//     cout << "The next character is " << next_char(a) << endl;
//     return 0;
// }

int main()
{
    int x = 3, y = 5, z= 10;
    int result = ++z + y - y + z + x++;
    cout << result << endl;
    return 0;
}