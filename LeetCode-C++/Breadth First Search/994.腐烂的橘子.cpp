/*
 * @lc app=leetcode.cn id=994 lang=cpp
 *
 * [994] 腐烂的橘子
 */

// @lc code=start
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int time = 0;
        int fresh = 0; 
        vector<pair<int, int>> dirs = {{-1,0}, {1,0}, {0,-1}, {0,1}};
        queue<pair<int, int>> q;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 2) {
                    q.push({i, j});
                }
                else if(grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        while(!q.empty()) {
            int size = q.size();
            bool rotten = false;
            for(int k = 0; k < size; k++) {
                auto cur = q.front();
                q.pop();
                for(auto dir : dirs) {
                    int i = cur.first + dir.first;
                    int j = cur.second + dir.second;
                    if(i >= 0 && i < m && j >= 0 && j < n && grid[i][j] == 1) {
                        grid[i][j] = 2;
                        q.push({i, j});
                        fresh--;
                        rotten = true;
                    }
                }
            }
            if(rotten) {
                time++;
            }
        }
        return fresh ? -1 : time;
    }
};
// @lc code=end

