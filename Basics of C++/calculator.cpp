#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter Operation: ";
    cin >> op;
    switch (op)
    {
    case '+':
        /* code */
        cout << "Addition of a and b : "<< a + b << endl;
        break;
    case '-':
        cout << "Subtraction of a and b: "<< a - b << endl;
        break;
    case '*':
        cout << "Multiplication of a and b " << a*b << endl;
        break;
    case '/':
        cout << "Division of a and b " << ((float)a/b) << endl;
        break;
    
    default:
        cout << "Invalid Operation Entered!!" << endl;
        break;
    }
    
}

 