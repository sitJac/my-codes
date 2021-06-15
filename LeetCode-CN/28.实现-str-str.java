/*
 * @lc app=leetcode.cn id=28 lang=java
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
    public int strStr(String haystack, String needle) {
        if(needle.length() == 0){
            return 0;
        }
        int len = needle.length();
        for(int index = 0;index<haystack.length();index++){
            if(haystack.charAt(index) == needle.charAt(0) && (index+len)<=haystack.length() ){
                if(haystack.substring(index,index+len).equals(needle)){
                    return index;
                }
            }
        }
        return -1;
    }
}
// @lc code=end

