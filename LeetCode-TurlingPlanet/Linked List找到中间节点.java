/*
*   Initialize 2 pointers i and j pointing to the head
*   While the next move of the faster pointer j is valid(inside bound),move j two steps and i one step forward
*   return the node at j
*/

public ListNode linkedListMiddleNode(ListNode head){
    ListNode i = head, j = head;
    While(j != null && j.next != null){
        i = i.next;
        j = j.next.next;
    }
    return i;
}


