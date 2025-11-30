#include <iostream>
#include <cmath>
using namespace std;
double ans(int a, int b)
{
    double a_pow = pow(a,2);
    double b_pow = pow(b,2);
    double prod = 2*(a*b);
    double sum = a_pow + b_pow + prod;
    return sum;


}
int main()
{
    int a,b;
    cout << "Enter value 1: ";
    cin >> a;
    cout << "Enter value 2: ";
    cin >> b;
    double result = ans(a,b);
    cout << "The solution for the given input is " << result << endl;
    return 0;
    
}