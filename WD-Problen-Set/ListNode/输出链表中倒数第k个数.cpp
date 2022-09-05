#include<bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int v):val(v), next(NULL){}
};

int main()
{
    int n;
    while(cin >> n)
    {
        //顺序建立链表
        ListNode* head = new ListNode(0);
        head->next = NULL;
        ListNode* p = head;
        for(int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            ListNode* node = new ListNode(temp);
            node->next = NULL;
            p->next = node;
            p = node;
        }
        int k;
        cin >> k;
        if(k == 0)
        {
            cout << 0 << endl;
            continue;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while(k--)
        {
            fast = fast->next;
        }
        while(fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        cout << slow->val << endl;
    }
    return 0;
}