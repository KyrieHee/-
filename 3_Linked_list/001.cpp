/*
反转一个单链表。

示例:
输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL

进阶:
你可以迭代或递归地反转链表。你能否用两种方法解决这道题？
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


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
    ListNode* reverseList(ListNode* head) {
        //判断链表是否为空
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *p = head;
        ListNode *q = p->next;
        ListNode *r;
        
        p->next = NULL;
        while(q != NULL)
        {
            r = q->next;
            q->next = p;
            p = q;
            q = r;
        }
        return p;
          
    }
};
