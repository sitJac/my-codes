#include<bits/stdc++.h>
using namespace std;

int n, m; //行和列
int p, q; //奖励
vector< vector<char> > mp;

int rule1(){
    int cnt = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j++){
            if(mp[i][j] == 'c'){
                cnt++;
            }
        }
    }
    return cnt * p;
}

int rule2(){
    int cnt_single = 0;
    int cnt_double = 0;
    vector< vector<int> > arr(n, vector<int>(m,1));   //标记数组
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mp[i][j] == mp[i][j+1] && j+1<m && mp[i][j] == 'c'){
                arr[i][j] = 0;
                arr[i][j+1] = 0;
            }
            if(mp[i][j] == mp[i+1][j] && i+1<n && mp[i][j] == 'c'){
                arr[i][j] = 0;
                arr[i+1][j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                cnt_double++;
            }
        }
    }
    cnt_single = m*n - cnt_double;
    if(cnt_double % 2 == 2){
        cnt_double /= 2;
    }
    else{
        cnt_double = (cnt_double-1) / 2;
    }
    return cnt_single*p + cnt_double*q;
}


int main(){
    while(cin >> n >> m >> p >> q){
        mp = vector< vector<char> >(n, vector<char>(m, ' '));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                char temp;
                cin >> temp;
                mp[i][j] = temp;
            }
        }
        int res1 = rule1();
        int res2 = rule2();
        cout << max(res1, res2) << endl;
    }
    return 0;
}