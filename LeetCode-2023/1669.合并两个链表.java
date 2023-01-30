/*
 * @lc app=leetcode.cn id=1669 lang=java
 *
 * [1669] 合并两个链表
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
    public ListNode mergeInBetween(ListNode list1, int a, int b, ListNode list2) {
        ListNode preA = list1;
        for(int i = 0; i < a - 1; i++) {
            preA = preA.next;
        }
        ListNode aftB = list1;
        for(int i = 0; i < b + 1; i++) {
            aftB = aftB.next;
        }
        preA.next = list2;
        while(list2.next != null) {
            list2 = list2.next;
        }
        list2.next = aftB;
        return list1;
    }
}
// @lc code=end

