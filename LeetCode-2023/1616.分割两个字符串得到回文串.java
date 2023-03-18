/*
 * @lc app=leetcode.cn id=1616 lang=java
 *
 * [1616] 分割两个字符串得到回文串
 */

// @lc code=start
class Solution {
    public boolean isPalindrome(String s, int i, int j) {
        while (i < j) {
            if (s.charAt(i) != s.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    public boolean checkPalindromeFormation(String a, String b) {
        int n = a.length();
        if (n == 0) {
            return true;
        }

        int i = 0, j = n - 1;
        while (i < j && a.charAt(i) == b.charAt(j)) {
            i++;
            j--;
        }
        if (isPalindrome(a, i, j) || isPalindrome(b, i, j)) {
            return true;
        }

        i = 0;
        j = n - 1;
        while (i < j && b.charAt(i) == a.charAt(j)) {
            i++;
            j--;
        }
        if (isPalindrome(a, i, j) || isPalindrome(b, i, j)) {
            return true;
        }

        return false;
    }
}
// @lc code=end

