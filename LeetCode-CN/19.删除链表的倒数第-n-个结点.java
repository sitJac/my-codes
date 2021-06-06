/*
 * @lc app=leetcode.cn id=19 lang=java
 *
 * [19] 删除链表的倒数第 N 个结点
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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode temp = head;
        Map<Integer,ListNode> m = new HashMap<Integer,ListNode>();
        int index=1;
        while(temp!=null){
            m.put(index++,temp);
            temp = temp.next;
        }
        int size = m.size();
        if(size == 1)
            return null;
        if(n == 1){
            m.get(size-1).next = null;
        }else if(n == size){
            head = head.next;
        }else{
            m.get(size-n).next = m.get(size-n+2);
        }
        return head;
    }
}
// @lc code=end

