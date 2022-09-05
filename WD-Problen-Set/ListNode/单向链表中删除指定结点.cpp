#include<iostream>
#include<stdio.h>
using namespace std;

struct ListNode
{
    int m_nKey;
    ListNode* m_pNext;
    ListNode(int val):m_nKey(val),m_pNext(NULL){}
};

int main(){
    int N;//输入链表结点个数(在这里并不意味着后面输入节点的行数)
    int hval;  //输入头结点的值
    while(cin>>N>>hval){
        ListNode *HEAD = new ListNode(hval);
        ListNode *pre=HEAD,*cur=HEAD->m_pNext,*ptr=HEAD;
        int val,nodeVal;
        int count=0;
        while(cin>>val>>nodeVal){
            pre=HEAD,cur=HEAD->m_pNext;
            while(cur){
                if(cur->m_nKey==nodeVal)break;
                pre = cur;
                cur=cur->m_pNext;
            }
            //链表插入操作
            if(cur){
                ListNode *temp = cur->m_pNext;
                cur->m_pNext = new ListNode(val);
                cur=cur->m_pNext;
                cur->m_pNext = temp;
                count++;
            }else{
                ptr->m_pNext = new ListNode(nodeVal);
                ptr=ptr->m_pNext;
                ptr->m_pNext = new ListNode(val);
                ptr=ptr->m_pNext;
                count+=2;
            }
            if(count==N)
                break;  //输入的行数并不等于N
        }
        int deleteVal;
        cin>>deleteVal;
        //链表删除操作
        pre = HEAD;
        cur=HEAD->m_pNext;
        while(cur){
            if(cur->m_nKey==deleteVal){
                pre->m_pNext = cur->m_pNext;
                cur=cur->m_pNext;
                break;
            }else{
                pre=cur;
                cur=cur->m_pNext;
            }
        }
        //输出链表
        cur=HEAD->m_pNext;
        while(cur){
            cout<<cur->m_nKey<<" ";
            cur=cur->m_pNext;
        }
        cout<<endl;
    }
    return 0;
}