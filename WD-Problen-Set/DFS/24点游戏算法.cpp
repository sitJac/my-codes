#include<bits/stdc++.h>
using namespace std;

double num[4];
int flag = 0;
bool vis[4];

void dfs(int step, double sum){
    if(step == 4){
        if(sum == 24){
            flag = 1;
            return ;
        }
    }
    else{
        step++;
        for(int i = 0; i < 4; i++){
            if(vis[i] == 0){    //未被访问过
                vis[i] = 1;
                dfs(step, sum + num[i]);
                dfs(step, sum - num[i]);
                dfs(step, sum * num[i]);
                dfs(step, sum / num[i]);
                vis[i] = 0;
            }
        }
    }
}

int main(){
    while(cin >> num[0] >> num[1] >> num[2] >> num[3]){
        flag = 0;
        memset(vis, 0, sizeof(vis));
        dfs(0, 0);
        if(flag == 1){
            cout << "true" << endl;
        }
        else{
            cout << "false" << endl;
        }
    }
    return 0;
}