class Solution {
    public int maxValue(int[][] grid) {
        int m = grid.length, n = grid[0].length;
        int[][] f = new int[m][n];
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i > 0) {
                    f[i][j] = Math.max(f[i][j], f[i - 1][j]);
                }
                if (j > 0) {
                    f[i][j] = Math.max(f[i][j], f[i][j - 1]);
                }
                f[i][j] += grid[i][j];
            }
        }
        return f[m - 1][n - 1];
    }
}


class Solution {
    public int maxValue(int[][] grid) {
        int m = grid.length, n = grid[0].length;
        int[][] f = new int[m+1][n+1];
        for (int i = 1; i < m+1; ++i) {
            for (int j = 1; j < n+1; ++j) {
                f[i][j] = Math.max(f[i][j - 1], f[i - 1][j]) + grid[i-1][j-1];
            }
        }
        return f[m][n];
    }
}