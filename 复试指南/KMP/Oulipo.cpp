#include <bits/stdc++.h>
using namespace std;

int prefix[10000];

void prefix_table(string pattern)
{
    prefix[0] = 0;
    int len = 0;
    int i = 1;
    int n = pattern.size();
    while (i < n)
    {
        if(pattern[i] == pattern[len])
        {
            len++;
            prefix[i] = len;
            i++;
        }
        else{
            if(len > 0)
            {
                len = prefix[len - 1];
            }
            else
            {
                prefix[i] = len;    //prefix[i] = 0;
                i++;
            }
        }
    }
}

void moved_prefix_table(string pattern)
{
    int n = pattern.size();
    for (int i = n - 1; i >= 0; i--)
    {
        prefix[i] = prefix[i - 1];
    }
    prefix[0] = -1;
}

int kmp_search(string text, string pattern)
{
    int m = text.size();
    int n = pattern.size();
    prefix_table(pattern);
    moved_prefix_table(pattern);
    int number = 0;
    int i = 0, j = 0;
    while (i < m)
    {
        if(j == -1 || text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            j = prefix[j];
        }
        if(j == n)
        {
            number++;
            j = prefix[j];
        }
    }
    return number;
}

int main()
{
    int caseNum;
    cin >> caseNum;
    while (caseNum--)
    {
        string pattern, text;
        cin >> pattern >> text;
        int ans = kmp_search(text, pattern);
        cout << ans << endl;
    }
    return 0;
}