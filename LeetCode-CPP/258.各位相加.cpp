/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num>0){
            int a = num%10;
            sum = sum + a;
            num = num / 10;
        }
        if(sum/10!=0){
            return addDigits(sum);
        }
        else{
            return sum;
        }
    }
};
// @lc code=end

