#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;

const int MAXN = 100001;

struct Status
{
    int n, t;   //n为农夫当前的位置坐标 t为到达当前坐标的时间
    Status(int n, int t): n(n), t(t){}
};

bool visit[MAXN];

int BFS(int n, int k)
{
    queue<Status> myQueue;
    myQueue.push(Status(n, 0));
    visit[n] = true;
    int answer = 0;
    while (!myQueue.empty())
    {
        Status current = myQueue.front();
        myQueue.pop();
        if (current.n == k)
        {
            answer = current.t;
        }
        for (int i = 0; i < 3; i++) //向后扩展三种状态
        {
            Status next = current;
            if (i == 0)
            {
                next.n += 1;
            }
            else if (i == 1)
            {
                next.n -= 1;
            }
            else if (i == 2)
            {
                next.n *= 2;
            }
            if (next.n < 0 || next.n >= MAXN || visit[next.n])
            {
                continue;
            }
            next.t++;
            myQueue.push(next);
            visit[next.n] = true;
        }
    }
    return answer;
}

int main()
{
    int N, K;
    cin >> N >> K;
    memset(visit, false, sizeof(visit));
    cout << BFS(N, K) << endl;
    return 0;
}