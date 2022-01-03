#include<iostream>
#define maxSize 100001
using namespace std;

int main()
{
    int scores[maxSize] = {};
    int n, schoolID, score, flag = 0, max = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> schoolID >> score;
        scores[schoolID] += score;
    }
    for (int i = 1; i <= n; i++)
    {
        if(max <= scores[i])
        {
            max = scores[i];
            flag = i;
        }
    }

    cout << flag << " " << scores[flag] << endl;
    return 0;
}