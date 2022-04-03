#include<bits/stdc++.h>
using namespace std;

int n, m;
vector< vector<int> > maze;
vector< vector<int> > best_path;
vector< vector<int> > temp_path;

void dfs(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m || maze[i][j] == 1){
        return ;
    }
    maze[i][j] = 1;
    temp_path.push_back({i, j});
    if(i == n - 1 && j == m - 1){
        best_path = temp_path;
    }
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j + 1);
    maze[i][j] = 0;
    temp_path.pop_back();
}

int main(){
    while(cin >> n >> m){
        maze = vector< vector<int> >(n, vector<int>(m,0));
        best_path.clear();
        temp_path.clear();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> maze[i][j];
            }
        }
        dfs(0, 0);
        for(auto it = best_path.begin(); it != best_path.end(); it++)
        {
            cout << "(" << (*it)[0] << "," << (*it)[1] << ")" << endl;
        }
    }
    return 0;
}