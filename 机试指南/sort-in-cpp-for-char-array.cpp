#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

bool cmp(const char *s1, const char *s2)
{
    int a = strcmp(s1, s2);
    if (a < 0)
        return true;
    else
        return false;
}

int main()
{
    char *words[5] = 
    {
        "welcome",
        "to",
        "the",
        "coding",
        "world"
    };
    sort(words, words + 5, cmp);
    for (int i = 0; i < 7; i++)
    {
        cout << words[i] << " ";
    }
    cout << endl;
    return 0;
}