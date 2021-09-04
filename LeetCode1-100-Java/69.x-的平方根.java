/*
 * @lc app=leetcode.cn id=69 lang=java
 *
 * [69] x 的平方根
 */

// @lc code=start
class Solution {
    public int mySqrt(int x) {
        if(x<=1) return x;
        long l=1,r=x;
        while(l<=r){
            long mid=(l+r)/2;
            long n=mid*mid;
            if(n==x||n<x&&(mid+1)*(mid+1)>x) return (int)mid;
            if(n>x){
                r=(int)mid-1;
            }else{
                l=(int)mid+1;
            }
        }
        return -1;
    }
}
// @lc code=end

