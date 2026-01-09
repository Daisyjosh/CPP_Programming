#include <iostream>
using namespace std;

void decreasing_order(int n)
{
    if(n == 0)
    {
        return;
    }
    cout << n << " ";
    decreasing_order(n-1);

}

int main()
{
    decreasing_order(1000);
    return 0;
}