/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *先通过while循环将各个位置的数加起来,
  然后判断是否为一位数。
  如果不是的话继续递归，否则输出该数
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

