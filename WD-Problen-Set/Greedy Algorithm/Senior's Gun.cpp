#include<iostream>
#include<algorithm>
#define maxSize 100001
using namespace std;

long long gun[maxSize];
long long monster[maxSize];

bool cmp(long long x, long long y)
{
    return x > y;
}

int main()
{
    int caseNum;
    cin >> caseNum;
    while (caseNum--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> gun[i];
        for (int i = 0; i < m; i++)
            cin >> monster[i];
        sort(gun, gun + n, cmp);
        sort(monster, monster + m);
        long long answer = 0;
        for (int i = 0; i < n; i++)
        {
            if (gun[i] <= monster[i] || i >= m) break;
            answer += (gun[i] - monster[i]);
        }
        printf("%lld\n", answer);
    }
    return 0;
}