#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

struct student
{
    int number;
    int score;
};

student s[MAXN];

bool cmp(student s1, student s2)
{
    if(s1.score == s2.score)
    {
        return s1.number < s2.number;
    }
    else
    {
        return s1.score < s2.score;
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s[i].number >> s[i].score;
        }
        sort(s, s + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << s[i].number << " " << s[i].score << endl;
        }
    }
    return 0;
}