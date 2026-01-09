#include <iostream>
using namespace std;
int main()
{
    int t_case1[5];
    cout << "t_case1" << endl;
    cout << t_case1[0] << endl; // some garbage value will be printed
   
    // int t_case2[]; // error arises
     
    int t_case2[3] = {0,2};
    cout << "t_case2" << endl;
    cout << t_case2[0] << endl;
    cout << t_case2[2] << endl; // allocates 0 for the unknown values

    int t_cases3[] = {1,2};
    cout << "t_cases3" << endl;
    cout << t_cases3[0] << endl;
    cout << t_cases3[2] << endl; // allocates 0 for the unknown values



     return 0;

}