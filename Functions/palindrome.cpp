#include <iostream>
using namespace std;
bool isPalindrome(int n)
{
    int last_digit = 0;
    int num = n;
    int rev  = 0;
    while(n!=0)
    {
        last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
        
    }
    if(rev == num)
    {
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool result = isPalindrome(n);
    cout << result << endl;
    return 0;

}