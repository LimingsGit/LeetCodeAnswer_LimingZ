给一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。

说明：不应修改给定的链表。

补充：
你是否可以不用额外空间解决此题？


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow, *fast;
    fast = slow = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            while(head != slow)
            {
                head = head->next;
                slow = slow->next;
            }
            return head;
        }   
    }
    return NULL;
    
}