#include <iostream>
using namespace std;
int main(){
    int number,num;
    int sum = 0;
    cout << "Enter a number: ";
    cin >> number;
    int n = number;
    while(n != 0)
    {
        
        num = n % 10;
        sum += num;
        cout << n << " ";
        n /= 10;
        
    
    }
    cout << sum << endl;
    return 0;
}