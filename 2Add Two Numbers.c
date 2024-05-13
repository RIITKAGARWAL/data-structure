/**
 * 2. Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers.
 The digits are stored in reverse order, and each of their nodes contains a single digit.
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Constraints:

The number of nodes in each linked list is in the range [1, 100].
0 <= Node.val <= 9
It is guaranteed that the list represents a number that does not have leading zeros.


 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p,*q,*r,*temp;
    static int carry = 0;
    int sum ;
    p= l1;
    q= l2;
    r = (struct ListNode *)malloc(sizeof(struct ListNode));
    r->next = NULL;
    temp = r;
    
    while(p!=NULL || q!=NULL || carry !=0)
        {
           sum= 0;
            if(p!=NULL){
                sum+= p->val;
                p = p->next;
            }
            if(q!=NULL){
                sum+= q->val;
                q = q->next;
            }
            sum += carry;

            carry = sum/10;
            r->val= sum %10;
            if(p!=NULL || q!=NULL || carry !=0)
            {r->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            r= r->next;
            }
            r->next = NULL;
       
        }
        
        return temp;
    
}