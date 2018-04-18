请检查一个链表是否为回文链表。

进阶：
你能在 O(n) 的时间和 O(1) 的额外空间中做到吗？


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head == NULL || head->next == NULL)
        return true;
    
    int length = 0;
    struct ListNode* temp = head;
    while(temp)
    {
        length++;
        temp = temp->next;
    }
    
    int move_length = length / 2;
    struct ListNode* new_head = NULL;
    while(move_length)
    {
        struct ListNode* next = head->next;
        head->next = new_head;
        new_head = head;
        head = next;
        move_length--;
    }
    
    if(length % 2 != 0)
        head = head->next;    
    while(new_head && head)
    {
        if(new_head->val != head->val)
            return false;
        new_head = new_head->next;
        head = head->next;
    }
   
    return true;
    
}