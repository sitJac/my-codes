/*
 * @lc app=leetcode.cn id=23 lang=java
 *
 * [23] 合并K个升序链表
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
    public ListNode mergeKLists(ListNode[] lists) {
         if (lists == null || lists.length == 0) return null;
         PriorityQueue<ListNode> queue = new PriorityQueue<>(lists.length, new Comparator<ListNode>() {
             @Override
             public int compare(ListNode o1, ListNode o2) {
                 if (o1.val < o2.val) return -1;
                 else if (o1.val == o2.val) return 0;
                 else return 1;
             }
         });
         ListNode dummy = new ListNode(0);
         ListNode p = dummy;
         for (ListNode node : lists) {
             if (node != null) queue.add(node);
         }
         while (!queue.isEmpty()) {
             p.next = queue.poll();
             p = p.next;
             if (p.next != null) queue.add(p.next);
         }
         return dummy.next;
     }
 }
// @lc code=end

