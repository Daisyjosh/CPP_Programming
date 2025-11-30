#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello world, this is c++";
    string str2;
    getline(cin,str2);
    //usual cin will stop when it reaches white spaces where as this function won't
    //delimiter $
    cout << str.length() << endl;
    cout << str.at(2) << endl; // prints the value at that index
    cout << str.substr(3,4) << endl; // creates substring 
    cout << str.find('h'); //first occurence
    return 0;


}