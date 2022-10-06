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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *p = head;
        ListNode *res = head;
        vector<int> sw;
        int c = 0;
        
        while(p != NULL)
        {
            sw.push_back(p->val);
            p = p->next;
            c++;
        }
        
        swap(sw[k-1],sw[c-k]);
        
        int i = 0;
        
        while(res)
        {
            res->val = sw[i];
            i++;
            res = res->next;
        }
        
        return head;
        
    }
};