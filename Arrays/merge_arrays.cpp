#include <iostream>
using namespace std;
int main()
{
    int arr1[3] = {1,2,3};
    int arr2[3] = {1,2,3};
    int n1 = 3;
    int n2 = 3;
    int merged[n1+n2];
    for(int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];

    }
    for(int i= 0; i < n2; i++)
    {
        merged[i+n1] = arr2[i];
    }
    for(int i = 0; i < (n1+n2); i++)
    {
        cout << merged[i] << endl;
    }
    return 0;


}