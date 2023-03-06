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
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        if(!head->next) return false;
        
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(1){
            if(fast->next==NULL || fast->next->next == NULL) return false;
            
            if(slow==fast) return true;
            fast=fast->next->next;
            slow=slow->next;
        }
        return false;
    }
    
};