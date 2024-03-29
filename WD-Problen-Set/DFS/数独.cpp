#include<bits/stdc++.h>
using namespace std;

const int N = 15;
int mp[N][N];
bool find_answer_ok = false;

bool check(int row, int col, int val){
    //同行
    for(int i = 0; i < 9; i++){
        if(mp[row][i] == val){
            return false;
        }
    }
    //同列
    for(int i = 0; i < 9; i++){
        if(mp[i][col] == val){
            return false;
        }
    }
    //同一个九宫格
    int limit_row = row / 3 * 3 + 3;
    int limit_col = col / 3 * 3 + 3;
    for(int i = limit_row - 3; i < limit_row; i++){
        for(int j = limit_col - 3; j < limit_col; j++){
            if(mp[i][j] == val){
                return false;
            }
        }
    }
    return true;
}

void dfs(int row, int col){//当前的行和列
    if(col == 9){
        row++;
        col = 0;
    }
    if(row == 9 && col == 0){
        find_answer_ok = true;
        return ;
    }
    if(mp[row][col] == 0){
        for(int i = 1; i <= 9; i++){
            if(check(row, col, i)){
                mp[row][col] = i;
                dfs(row, col + 1);
                if(find_answer_ok){
                    return ;
                }
                mp[row][col] = 0;
            }
            
        }
    }
    else{
        dfs(row, col + 1);
    }
}

int main(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> mp[i][j];
        }
    }
    dfs(0, 0);    //起点坐标（0，0）
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cout << mp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}