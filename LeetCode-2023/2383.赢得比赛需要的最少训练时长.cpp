/*
 * @lc app=leetcode.cn id=2383 lang=cpp
 *
 * [2383] 赢得比赛需要的最少训练时长
 */

// @lc code=start
class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int sum = 0;
        int ans = 0;
        for(auto e : energy) {
            sum += e;
        }
        if (sum < initialEnergy) {
            ans = 0;
        } else {
            ans = sum + 1 - initialEnergy;
        }
        for(auto exp : experience) {
            if (initialExperience <= exp) {
                ans += 1 + (exp - initialExperience);
                initialExperience = 2 * exp + 1;
            } else {
                initialExperience += exp;
            }
        }
        return ans;
    }
};
// @lc code=end

