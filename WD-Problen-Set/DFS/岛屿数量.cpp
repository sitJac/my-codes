class Solution {
public:
    /**
     * 判断岛屿数量
     * @param grid char字符型vector<vector<>> 
     * @return int整型
     */
    void dfs(vector< vector<char> > &grid, int i, int j){
        grid[i][j] = '0';
        if(i - 1 >= 0 && grid[i-1][j] == '1'){
            dfs(grid, i - 1, j);
        }
        if(i + 1 < grid.size() && grid[i+1][j] == '1'){
            dfs(grid, i + 1, j);
        }
        if(j - 1 >= 0 && grid[i][j - 1] == '1'){
            dfs(grid, i, j - 1);
        }
        if(j + 1 < grid.size() && grid[i][j + 1] == '1'){
            dfs(grid, i, j + 1);
        }
    }
    
    int solve(vector<vector<char> >& grid) {
        // write code here
        int lands = 0;
        int N = grid.size();
        int M = grid[0].size();
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(grid[i][j] == '1'){
                    lands++;
                    dfs(grid, i, j);
                }
            }
        }
        return lands;
    }
};