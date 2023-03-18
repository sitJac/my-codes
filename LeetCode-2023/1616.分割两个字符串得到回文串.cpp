/*
 * @lc app=leetcode.cn id=1616 lang=cpp
 *
 * [1616] 分割两个字符串得到回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s, int i, int j) {
        while(i < j) {
            if(s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool checkPalindromeFormation(string a, string b) {
        int n = a.size();
        if(n == 0) {
            return true;
        }
        int i = 0;
        int j = n - 1;
        while(i < j && a[i] == b[j]) {
            i++;
            j--;
        }
        if(isPalindrome(a, i, j) || isPalindrome(b, i, j)) {
            return true;
        }
        i = 0;
        j = n - 1;
        while(i < j && b[i] == a[j]) {
            i++;
            j--;
        }
        if(isPalindrome(a, i, j) || isPalindrome(b, i, j)) {
            return true;
        }
        return false;
    }
};
// @lc code=end

