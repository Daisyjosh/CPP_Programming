#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);

    cout << st.top() << endl; // 20

    st.pop(); // remove top

    return 0;
}