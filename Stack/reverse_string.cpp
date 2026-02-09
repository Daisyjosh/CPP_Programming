#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(string s)
{
    stack<char> st;

    for(char c:s)
    {
        st.push(c);
    }

    string res = "";
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}