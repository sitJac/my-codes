//求最小体力消耗 9 1 2
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    priority_queue<int, vector<int>, greater<int>> myQueue;
    while(cin >> n){
        if(n == 0){
            break;
        }
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            myQueue.push(temp);
        }
        int sum = 0;
        while(myQueue.size() > 1){
            int a = myQueue.top();
            myQueue.pop();
            int b = myQueue.top();
            myQueue.pop();
            myQueue.push(a + b);
            sum += a + b;
        }
        cout << sum << endl;
    }
    return 0;
}