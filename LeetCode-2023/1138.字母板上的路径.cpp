/*
 * @lc app=leetcode.cn id=1138 lang=cpp
 *
 * [1138] 字母板上的路径
 */

// @lc code=start
class Solution {
public:
    string alphabetBoardPath(string target) {
        int cx = 0, cy = 0;
        string ans = "";
        for(char c : target) {
            int nx = (c - 'a') % 5;
            int ny = (c - 'a') / 5;
            if(ny < cy) {
                ans.append((cy - ny), 'U');
            }
            if(nx < cx) {
                ans.append((cx - nx), 'L');
            }
            if(ny > cy) {
                ans.append((ny - cy), 'D');
            }
            if(nx > cx) {
                ans.append((nx - cx), 'R');
            }
            ans.push_back('!');
            cx = nx;
            cy = ny;
        }
        return ans;
    }
};
// @lc code=end

