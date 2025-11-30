#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin>>n;
    //pyramid pattern
    for(int i = 1; i <= n; i++)
    {
        //spaces
        for(int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        //star-1
        for(int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        //star = 2
        for(int z = 1; z<=i-1; z++)
        {
            cout << "*";
        }
        cout <<  endl;
    }
    //second half of the diamond pattern
    for(int i = n-1; i >= 1; i--)
    {
        //spaces
        for(int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        //star-1
        for(int k = 1; k <=i; k++)
        {
            cout << "*";
        }
        //star - 2
        for(int z = 1; z <= i-1;z++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}