/*
*   High Level Idea:
*       Initialize two points i and jpointing to the head
*       Move j k steps forward
*       Move both i and j one steps forward at a time until j is out of bound
*
*/

public ListNode linkedlistLastKNode(ListNode head, k){
    ListNode i = head, j = head;
    //move j k steps forward
    for(int c = 0; c < k; c++){
        j = j.next;
    }
    While(j != null){
        i = i.next;
        j = j.next;
    }
    return i;
}