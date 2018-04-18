给定一个链表，判断链表中否有环。

补充：
你是否可以不用额外空间解决此题？




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *slow = head;
    if(head == NULL || head->next == NULL)
        return false;
    struct ListNode *fast = head->next;
    while(fast)
    {
        if(slow == fast)
            return true;
        slow = slow->next;
        if(fast->next && fast->next->next)
            fast = fast->next->next;
        else
            return false;
    }
    return false;
}