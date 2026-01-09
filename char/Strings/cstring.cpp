#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char word[] = "Hello";
    char word1[] = "hello";
    strcpy(word,word1);
    cout << word;
    cout << word1;
    cout << strcat(word,word1);
    cout << strcmp(word,word1);
    return 0;
}