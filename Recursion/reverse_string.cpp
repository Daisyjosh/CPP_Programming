// Reverse Given String using Recursion
#include <iostream>
#include <string>
using namespace std;
string reverse_str(string s, int i)
{
    if(i == (s.size()-1))
    {
        return string(1,s[i]);
    }
    return reverse_str(s,i+1) + s[i];

}

int main()
{
    string s = "daisy";
    cout << reverse_str(s,0) << endl;
    return 0;
}