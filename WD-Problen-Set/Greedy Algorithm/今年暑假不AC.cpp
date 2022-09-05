#include<iostream>
#include<cstdio>
#include<algorithm>
#define maxSize 101
using namespace std;

struct Program
{
    int startTime;
    int endTime;
};

Program arr[maxSize];

bool cmp(Program a,Program b)
{
    return a.endTime < b.endTime;
}
int main()
{
    int n;
    while(cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        for (int i = 0; i <n; i++)
        {
            cin >> arr[i].startTime >> arr[i].endTime;
        }
        sort(arr, arr + n, cmp);
        int currentTime = 0;
        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            if(currentTime <= arr[i].startTime)
            {
                currentTime = arr[i].endTime;
                answer++;
            }
        }
        cout << answer;
    }
    return 0;
}