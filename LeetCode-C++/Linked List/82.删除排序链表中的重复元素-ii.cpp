/*
 * @lc app=leetcode.cn id=82 lang=cpp
 *
 * [82] 删除排序链表中的重复元素 II
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) {
            return head;
        }

        ListNode* dummy_node = new ListNode(-1);
        dummy_node->next = head;
        ListNode* prev = dummy_node;
        ListNode* cur = head;
        while(cur && cur->next) {
            if(cur->val == cur->next->val) {
                int val = cur->val;
                while(cur && val == cur->val) {
                    cur = cur->next;
                }
                prev->next = cur;
            }
            else {
                cur = cur->next;
                prev = prev->next;
            }
        }
        return dummy_node->next;
    }
};
// @lc code=end

