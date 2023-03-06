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
private:
    ListNode* merge2list(ListNode* list1,ListNode* list2){
        ListNode* ans=new ListNode;
        ListNode* head2=new ListNode;
        ans=head2;
        while(list1 and list2){
                if(list1->val <= list2->val){
                    head2->next=list1;
                    head2=head2->next;
                    list1=list1->next;
                }
                else if(list1->val > list2->val){
                    head2->next=list2;
                    head2=head2->next;
                    list2=list2->next;
                }  
        }
        while(list1){
                head2->next=list1;
                    head2=head2->next;
                    list1=list1->next;
            }
            while(list2){
                    head2->next=list2;
                    head2=head2->next;
                    list2=list2->next; 
            }
        return ans->next;
    }
    
    
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0) return NULL;
        
        ListNode* head=lists[0];
        
        for(int i=1;i<n;i++){
            head = merge2list(head,lists[i]);
        }
        
        return head;
    }
};