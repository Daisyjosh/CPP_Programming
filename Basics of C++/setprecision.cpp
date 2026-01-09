#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float f;
    double d;
    cin >> f >> d;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d << endl;
    return 0;
}