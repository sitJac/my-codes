/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr) {
            return head;
        }
        ListNode *node = nullptr;
        ListNode *cur = head;
        while(cur != nullptr) {
            ListNode *tail = cur->next;
            cur->next = node;
            node = cur;
            cur = tail;
        }
        return node;
    }
};
// @lc code=end

