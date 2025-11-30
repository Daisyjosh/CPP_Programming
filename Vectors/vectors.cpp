#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec1;
    cout << "Size of vec1: " << vec1.size() << endl;
    vector<int> vec2(5,-1);
    for(int i = 0; i < 5; i++) {
        cout << vec2[i];
    }
    cout << endl;
    vector<int> vec3 = {1,2,3,4,4};
    cout << vec3.size() << endl;
    return 0;
}