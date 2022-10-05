/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* p = head;
        ListNode* q = NULL;

        while(p != NULL)
        {
            ListNode *r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        return q;
    }
};



*/
class Solution {
public:
    
    ListNode* reverseList1(ListNode* q,ListNode* p)
    {
        if(p == NULL)
            return q;
         ListNode *r = new ListNode(p->val, q);
         return reverseList1(r,p->next);
    }
    ListNode* reverseList(ListNode* head) {
        
        //ListNode* p = head;
        return reverseList1(NULL,head);
        
    }
};
