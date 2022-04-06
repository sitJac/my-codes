#include<bits/stdc++.h>
using namespace std;

int x, N, M;
vector<string> mp; //地图

void Function(){
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(mp[i][j] == '.'){
                cnt++;
            }
        }
    }
    if(cnt == 0){
        cout << "-1";
    }
    else{
        cout << cnt;
    }
}


int main(){
    cin >> x >> N >> M;
    for(int i = 0; i < N; i++){ //输入地图
        string temp;
        cin >> temp;
        mp.push_back(temp);
    }
    Function();
    return 0;
}

/*
1 2 3
s..
.#e
3

0 3 3
s..
%#.
e..
6

0 2 3
s%%
%%e
-1
*/