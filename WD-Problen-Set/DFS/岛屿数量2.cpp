class Solution {
public:
    /**
     * 判断岛屿数量
     * @param grid char字符型vector<vector<>> 
     * @return int整型
     */
    void dfs(vector<vector<char> >& grid, int i, int j){
        if(i < 0 || i >= grid.size() ||
           j < 0 || j >= grid[0].size() || grid[i][j] == '0'){
            return ;
        }
        grid[i][j] = '0';
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }
    int solve(vector<vector<char> >& grid) {
        // write code here
        int cnt = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    dfs(grid,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};