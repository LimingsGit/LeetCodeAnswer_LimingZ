2、两数相加
给定两个非空链表来表示两个非负整数。位数按照逆序方式存储，它们的每个节点只存储单个数字。将两数相加返回一个新的链表。
你可以假设除了数字 0 之外，这两个数字都不会以零开头。

示例：
输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807

1)C++
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode preHead(0), *p = &preHead;
        int carry = 0;
        while (l1 || l2 || carry) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum / 10;
            p->next = new ListNode(sum % 10);
            p = p->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return preHead.next;
    }
};



2)C
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result = l1;
    int sum = 0;
    while(l1 && l2)
    {
        l1->val = l1->val + l2->val;
        if(l1->next == NULL)
        {
            l1->next = l2->next;
            break;
        }
        if(l2->next == NULL)
            break;
        l1 = l1->next;
        l2 = l2->next;   
    }
    struct ListNode* temp = result;
    while(temp)
    {
        if(temp->val >= 10)
        {
            temp->val = temp->val - 10;
            if(temp->next)
                temp->next->val++;
            else
            {
                struct ListNode* new = (struct ListNode*)malloc(sizeof(struct ListNode));
                new->val = 1;
                new->next = NULL;
                temp->next = new;
                break;
            }
        }
        temp = temp->next;
    }
    return result;
}











