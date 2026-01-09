//clear range of bits excersise question 1

#include <iostream>
using namespace std;

int clearithbit(int num, int i)
{
    int mask = ~(1 << i);
    num = num & mask;
    return num;
}

int crob(int num, int i, int j)
{
    for(int k = i; k <= j; k++)
    {
       num = clearithbit(num,k);
    }
    return num;
}


int main()
{
    int i = 1;
    int j = 3;
    int num = 31;
    cout << "After clearing the range: " << crob(num,i,j);
    return 0;
}