#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100;

struct student
{
    string name;
    int score;
    int order;
};

student s[MAXN];

bool cmp0(student s1, student s2)
{
    if(s1.score == s2.score)
    {
        return s1.order < s2.order;
    }
    else
    {
        return s1.score > s2.score;
    }
}

bool cmp1(student s1, student s2)
{
    if(s1.score == s2.score)
    {
        return s1.order < s2.order;
    }
    else
    {
        return s1.score < s2.score;
    }
}

int main()
{
    int n, type;
    while (cin >> n)
    {
        if(n == 0)
        {
            break;
        }
        cin >> type;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i].name >> s[i].score;
            s[i].order = i;
        }
        if(type == 0)   //降序
        {
            sort(s, s+n, cmp0);
        }
        if(type == 1)   //升序
        {
            sort(s, s+n, cmp1);
        }
        for (int i = 0; i < n; i++)
        {
            cout << s[i].name << " " << s[i].score << endl;
        }
    }
    
    return 0;
}