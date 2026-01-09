#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char word[] = {'c','o','d','e','\0'};
    int start = 0;
    int end = strlen(word) - 1;
    while(start < end)
    {
        swap(word[start],word[end]);
        start+=1;
        end-=1;
    }
    cout << word << endl;
    return 0;
    
}