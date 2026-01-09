#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 1;

    for (int i = 1; i <= n; i++) {
        int start = current + i - 1;

        for (int s = 0; s < (n - i) * 2; s++) {
            cout << " ";
        }

        for (int num = start; num >= current; num--) {
            cout << num << " ";
        }

        cout << endl;

        current = start + 1;
    }

    for(int i = 1; i<=n; i++)
    {
        for(int k = 1; k = n-i; k++)
        {
            cout << " ";
        }
        for(int j = 1; )
    }

    return 0;
}
