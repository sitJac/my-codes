/*
 * @lc app=leetcode.cn id=542 lang=cpp
 *
 * [542] 01 矩阵
 */

// @lc code=start
class Solution {
private:
    vector<pair<int, int>> dirs = {{0,-1}, {0,1}, {-1,0}, {1,0}};

    bool is_valid_pos(int x, int y, int m, int n) {
        return x >= 0 && x < m && y >= 0 && y < n;
    }
    
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        if(mat.empty() || mat[0].empty()) {
            return mat;
        }
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        queue<pair<int, int>> q;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(mat[i][j] == 0) {
                    q.push({i,j});
                    visited[i][j] = true;
                }
            }
        }

        while(!q.empty()) {
            auto cur = q.front();
            q.pop();
            for(auto dir : dirs) {
                int next_x = cur.first + dir.first;
                int next_y = cur.second + dir.second;
                if(is_valid_pos(next_x, next_y, m, n) && !visited[next_x][next_y]) {
                    q.push({next_x, next_y});
                    mat[next_x][next_y] = mat[cur.first][cur.second] + 1;
                    visited[next_x][next_y] = true;
                }
            }
        }
        return mat;
    }
};
// @lc code=end

