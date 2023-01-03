/*
 * @lc app=leetcode.cn id=2042 lang=cpp
 *
 * [2042] 检查句子中的数字是否递增
 */

// @lc code=start
class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream ss(s);
        string token;
        int baseNumber = 0;
        while(ss >> token) {
            try
            {
                int number = stoi(token);
                if(number > baseNumber) {
                    baseNumber = number;
                } else {
                    return false;
                }
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        return true;
    }
};
// @lc code=end

