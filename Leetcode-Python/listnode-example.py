
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val    
        self.next = next    

# 定义一个解决该问题的类
class Solution:
    # 定义一个“合并两个有序链表”的函数（该函数可传入两个链表值）
    def mergeTwoLists(self, l1, l2):
        # 实例化单链表类：当前游标指针和输出链表
        cur = result = ListNode()
        # 程序运行条件：直至l1与l2全部为空时停止
        while l1 or l2:
            # 情况1°：l1与l2均不为空时
            if l1 and l2:
                # 当前l1链表值小于等于l2链表值时
                if l1.val <= l2.val:
                    # 上一结点的指针指向l1当前结点
                    cur.next = l1
                    # 游标指针指向当前结点
                    cur = cur.next
                    # l1当前指针指向下一位置
                    l1 = l1.next
                # 当前l1链表值大于l2链表值时
                else:
                    cur.next = l2
                    cur = cur.next
                    l2 = l2.next
            # 情况2°：l2为空时
            elif l1:
                cur.next = l1
                cur = cur.next
                l1 = l1.next
            # 情况3°：l1为空时
            elif l2:
                cur.next = l2
                cur = cur.next
                l2 = l2.next
        # 返回值+next，使得输出链表为除头结点以外的单链表值
        return result.next


if __name__ == '__main__':
    # 逐结点实例化单链表l1
    l1_cur = l1 = ListNode(1)
    l1_cur.next = ListNode(2)
    l1_cur = l1_cur.next
    l1_cur.next = ListNode(4)
    l1_cur = l1_cur.next
    # 逐结点实例化单链表l2
    l2_cur = l2 = ListNode(1)
    l2_cur.next = ListNode(3)
    l2_cur = l2_cur.next
    l2_cur.next = ListNode(4)
    l2_cur = l2_cur.next
    # 实例化解决问题的类，并调用“合并两个有序链表”函数得到排序好的最终单链表
    solution = Solution().mergeTwoLists(l1, l2)
    # 定义一个保存合并后单链表的空列表
    merge_lists_result = []
    while solution:
        merge_lists_result.append(solution.val)  # 将最终单链表值逐一传入上述定义的列表中
        solution = solution.next  # 每次传入后，将当前结点指向下一位置结点
    print(merge_lists_result)