#include <iostream>
using namespace std;
int main(){
    int number, mod;
    cout << "Enter a THREE digit number: ";
    cin >> number;
    int n = number;
    cout << n;
    int n1 = n % 10;
    cout << n1;
    n /= 10;
    int n2 = n % 10;
    n /= 10;
    int n3 = n % 10;
    int cube = n1*n1*n1 + n2*n2*n2 + n3*n3*n3;
    if(number == cube){
        cout << number << "is a Armstrong Number"<< endl;

    }
    else
    {
        cout << n << "is not a Armstrong Number" << endl;

    }
    return 0;


}