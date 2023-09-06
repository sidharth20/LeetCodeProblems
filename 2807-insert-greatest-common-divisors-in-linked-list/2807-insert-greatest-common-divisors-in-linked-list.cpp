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
    int gcd(int a, int b){
        int ans = min(a,b);
        while(ans>0){
            if(a%ans==0 && b%ans==0) return ans;
            
            ans--;
        }
        
        return ans;
        
    }
    
    void insertFunc(ListNode* head){
        int divisor = gcd(head->val,head->next->val);
        ListNode* tmp;
        ListNode* newNode = new ListNode(divisor);
        
        tmp=head->next;
        head->next=newNode;
        newNode->next=tmp;
        
    }
    
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* temp = head;
        
        while(temp->next){
            ListNode* hop = temp->next;
            insertFunc(temp);
            temp=hop;
        }
        
        return head;
    }
};