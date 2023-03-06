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
        ListNode* temp = head;
        int node_count=0;
        while(temp){
            node_count++;
            temp=temp->next;
        }
        temp=head;
        if(n==node_count) return head->next;
        int stop=0;
        while(temp){
            stop++;
            if(stop==node_count-n){
                temp->next=temp->next->next;
            }
            temp=temp->next;
        }
       return head;
    }
};