/*
 * @lc app=leetcode.cn id=61 lang=java
 *
 * [61] 旋转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode rotateRight(ListNode head, int k) {
        if(head==null || k == 0) return head;
        ListNode slow = head;
        ListNode quick = head;
        ListNode cal_n = head;
        ListNode pre = null;
        int len =0;
        while(cal_n!=null) {
            pre = cal_n;
            cal_n = cal_n.next;
            len++;
        }
        pre.next = head;
        k = len - k % len;
        //到此为止 尾接上头 现在只需要把k处断开
        while(k>0 && quick!= null){
            pre = quick;
            quick = quick.next;
            k--;
        }
        pre.next = null;
        return quick;
    }
}
// @lc code=end

