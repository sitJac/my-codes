/*
 * @lc app=leetcode.cn id=65 lang=java
 *
 * [65] 有效数字
 */

// @lc code=start
class Solution {
    public boolean isNumber(String s) {
        int sign = 1;
        int pointSign = 1;
        int eSign = 1;
        int numSign = -1;
        int i = 0;
        int n = s.length();
        while(i<n){
            if(s.charAt(i)>='0'&&s.charAt(i)<='9'){
                numSign = 1;
                sign = -1;
            }else if(s.charAt(i)=='+'||s.charAt(i)=='-'){
                if(sign>0){
                    sign = -sign;
                }else{
                    return false;
                }
                if(i>0&&s.charAt(i-1)=='.'){
                    return false;
                }
            }else if(s.charAt(i)=='.'){
                //numSign = -1;
            
                if(pointSign>0){
                    pointSign = -pointSign;
                }else{
                    return false;
                }
                if(i>0&&(s.charAt(i-1)=='e'||s.charAt(i-1)=='E')){
                    return false;
                }
            }else if(s.charAt(i)=='e'||s.charAt(i)=='E'){
                if(eSign<0||numSign<0){
                    return false;
                }
                eSign = -1;
                sign = 1;
                numSign = -1;
                pointSign = -1;
            }else{
                return false;
            }
            i++;
        }
        return numSign>0;
    }
}
// @lc code=end

