class Solution:
    def maxValue(self, grid: list[list[int]]) -> int:
        m, n = len(grid), len(grid[0])
        val = [([0] * (n + 1)) for _ in range(m + 1)]
        for i in range(1, m + 1):
            for j in range(1, n + 1):
                val[i][j] = max(val[i - 1][j], val[i][j - 1]) + grid[i - 1][j - 1]
        return val[m][n]

class Solution:
    def maxValue(self, grid: list[list[int]]) -> int:
        m, n = len(grid), len(grid[0])
        val = [([0] * (n)) for _ in range(m)]
        for i in range(0, m):
            for j in range(0, n):
                if i > 0:
                    val[i][j] = max(val[i][j], val[i-1][j])
                if j > 0:
                    val[i][j] = max(val[i][j], val[i][j-1])
                val[i][j] += grid[i][j]
        return val[m-1][n-1]