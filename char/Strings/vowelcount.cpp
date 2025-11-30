#include <iostream>
#include <string>
using namespace std;

bool isvowel(char c)
{
    return(c == 'a' || c == 'e' || c =='i' || c =='o' || c =='u');
}

int function(string s)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(isvowel(s[i]))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s = "eeerreeoi";
    cout << "The count is: " << function(s) << endl;
    return 0 ;
}