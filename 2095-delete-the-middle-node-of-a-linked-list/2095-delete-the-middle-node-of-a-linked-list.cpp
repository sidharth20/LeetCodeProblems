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
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        ListNode* tmp = head;
        while(tmp){
            len++;
            tmp = tmp->next;
        }
        if(len==1) return NULL;
        
        
        int i=0;
        ListNode* ans=head;
        tmp=ans;
        while(tmp){
            if(i==len/2-1){
                tmp->next = tmp->next->next;
                break;
            }
            i++;
            tmp = tmp->next;
        }
        
        return ans;;
    }
};