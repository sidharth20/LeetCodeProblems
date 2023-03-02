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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
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
};