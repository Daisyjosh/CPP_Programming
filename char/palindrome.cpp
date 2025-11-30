#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char word[], int n)
{
    int st = 0;
    int end = n - 1;
    while(st < end)
    {
        if(word[st] != word[end])
        {
            return false;
        }

        st++;
        end--;

    
    }
    return true;
}

int main()
{
    char word[] = "racecar";
    int n = strlen(word);
    cout << palindrome(word,n);

    return 0;
}