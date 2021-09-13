/*
 * @lc app=leetcode.cn id=206 lang=java
 *
 * [206] 反转链表
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
    public ListNode reverseList(ListNode head) {
        ListNode last = null;
        //改每条边，所以要访问链表
        while(head != null){
            ListNode nextHead = head.next;
            //改一条边
            head.next = last;
            //last，head向后移动一位
            last = head;
            head = nextHead;
        }
        return last;
    }
}
// @lc code=end

