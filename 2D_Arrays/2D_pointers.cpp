#include <iostream>
using namespace std;

void func(int (*mat)[4],int n, int m)
{
    cout << mat << endl; // printing the address of mat+0
    cout << mat+1 << endl; // printing the address of mat+1
    cout << *(mat+1) << endl; // printing the address of mat+1, we didnt mention j value hence the address is printed 
    cout << *(*(mat+2)+2) << endl; // printing the value of mat[2][2]

}
int main()
{
    int mat[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    func(mat,4,4);
    return 0;

}