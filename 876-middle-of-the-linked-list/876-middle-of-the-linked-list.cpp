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
    ListNode* middleNode(ListNode* head) {
        
        int count = 1,middle;
        ListNode* temp = head;
         ListNode* res = head;
        while(temp->next != NULL)
        {
            count++;
            temp = temp->next;
        }
       middle = count / 2 + 1;
        for(int i = 1; i < middle; i++)
                res = res->next;
       return res; 
    }
};