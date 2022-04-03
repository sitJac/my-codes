#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr){}
};

ListNode* build(int n){
    //顺序建立链表
    ListNode* head = new ListNode(0);
    head->next = nullptr;
    ListNode* p = head;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ListNode* node = new ListNode(temp);
        node->next = nullptr;
        p->next = node;
        p = node;
    }
    return head;
}

ListNode* reverse(ListNode* head){
    if(head == nullptr){
        return head;
    }
    ListNode *node = nullptr;
    ListNode *cur = head;
    while(cur != nullptr){
        ListNode *tail = cur->next;
        cur->next = node;
        node = cur;
        cur = tail;
    }
    return node;
}

int main(){
    int n;
    cin >> n;
    ListNode *head = build(n);
    reverse(head);
    cout << head;
    return 0;
}