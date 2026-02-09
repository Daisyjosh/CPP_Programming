#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10); // enqueue
    q.push(20);
    q.push(30);

    cout << q.front() << endl; // 10

    q.pop(); // removes front

    cout << q.front() << endl; // 20;
}