#include <iostream>
using namespace std;
int main(){
    int n;
    bool t = true;
    cout << "Enter n: ";
    cin >> n;
    for(int i = 2; i <= n-1; i++)
    {
        if(n % i == 0)
        {
            t = false;
            break;
        }

        
    }
    cout << t << endl;

    return 0;
}