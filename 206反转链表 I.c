反转一个单链表。

进阶:
链表可以迭代或递归地反转。你能否两个都实现一遍？


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* new_head = NULL;
    while(head)
    {
        struct ListNode* next = head->next;
        head->next = new_head;
        new_head = head;
        head = next;
    }
    return new_head;
}