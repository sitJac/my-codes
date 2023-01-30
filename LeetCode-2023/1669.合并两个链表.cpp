/*
 * @lc app=leetcode.cn id=1669 lang=cpp
 *
 * [1669] 合并两个链表
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* preA = list1;
        for(int i = 0; i < a - 1; i++) {
            preA = preA->next;
        }
        ListNode* aftB = list1;
        for(int i = 0; i < b + 1; i++) {
            aftB = aftB->next;
        }
        preA->next = list2;
        while(list2 ->next != nullptr) {
            list2 = list2->next;
        }
        list2->next = aftB;
        return list1;
    }
};
// @lc code=end

