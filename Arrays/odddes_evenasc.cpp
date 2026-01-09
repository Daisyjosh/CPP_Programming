#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Separate even and odd indices
    int even[(n+1)/2]; // even index elements
    int odd[n/2];      // odd index elements
    int e = 0, o = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0) even[e++] = arr[i];
        else odd[o++] = arr[i];
    }

    // Sort even ascending, odd descending
    sort(even, even+e);             // ascending
    sort(odd, odd+o, greater<int>()); // descending

    // Merge back into original array
    e = 0; o = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) arr[i] = even[e++];
        else arr[i] = odd[o++];
    }

    // Print result
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
