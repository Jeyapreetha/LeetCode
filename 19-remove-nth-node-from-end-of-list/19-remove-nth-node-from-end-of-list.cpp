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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int c = 0;
        ListNode* q = head;
        while(q != NULL)
        {
            c += 1;
            q = q->next;
           
        }
        cout << c ;
        if(c < n)
            return head;
        
       if(c == 1)
       {
            head = NULL;
           return head;
       }
       else if(c == n)
           return head->next;
        else
        {
            int len = c-n;
            ListNode* prev = NULL;
            ListNode* curr = head;

            for(int i = 0; i < len ; i++)
            {
                prev = curr;
                curr = curr->next;
            }
            
            prev->next = curr->next;
            //prev->next = prev->next->next;
            return head;
        }
        
      
        
    }
};