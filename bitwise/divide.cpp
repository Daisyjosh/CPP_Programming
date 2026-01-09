//Divide a number with the given n without using divide operator
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        int divide(int divideend, int divisor)
        {
            if (divisor == 0)
            {
                return INT_MAX;
            }
            if(divideend == INT_MIN && divisor == -1)
            {
                return INT_MAX;
            }
            bool negative = (divideend < 0) ^ (divisor < 0);
            long long a = llabs((long long)divideend);
            long long b = llabs((long long)divisor);

            long long ans = 0;

            for(int i = 31; i >= 0; i--)
            {
                if ((a>>i) >= b)
                {
                    a -= (b << i);
                    ans += (1LL << i);
                }
            }
            return negative ? -ans : ans;
        }
};

int main()
{
    Solution n;
    int result = n.divide(10,3);
    cout << result;
}