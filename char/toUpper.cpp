#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[],int n)
{
        for(int i = 0; i < n; i++)
    {
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z')
        {
            word[i] = ch;
        }
        else{
            word[i] = ch - 'a' + 'A';
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << word[i] << " ";
    }
}

void toLower(char word[],int n)
{
    for(int i = 0; i < n; i++)
    {
        char ch = word[i];
        if('a' <= ch && 'z' >= ch)
        {
            continue;
        }
        else
        {
            word[i] = ch - 'Z' + 'z';
        }


}

    for(int i = 0; i <n; i++)
    {
        cout << word[i];
    }
}
int main()
{
    char word[] = "ApPLE";
    int n = strlen(word);
    toUpper(word,n);
    toLower(word,n);

    return 0;

}