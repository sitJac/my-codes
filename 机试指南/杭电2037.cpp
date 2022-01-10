#include<iostream>
#include<algorithm>
using namespace std;

struct program
{
    int start;
    int end;
};

bool cmp(program &L, program &R)
{
    if(L.start == R.start)
        return L.end < R.end;
    else
        return L.start > R.start;
}

int main()
{
    program programs[100];
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int m = 1, lastProgramStart;
        for (int i = 0; i < n; i++)
            cin >> programs[i].start >> programs[i].end;
        sort(programs, programs + n, cmp);
        lastProgramStart = programs[0].start;
        for (int i = 1; i < n; i++)
        {
            if (programs[i].end <= lastProgramStart)
            {
                ++m;
                lastProgramStart = programs[i].start;
            }
        }
        cout << m << endl;
    }

    return 0;
}