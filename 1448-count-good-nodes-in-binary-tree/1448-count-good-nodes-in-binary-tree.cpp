/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, int &count, int max_now){
        if(!root) return;
        if(root->val>=max_now){
        count++;
        max_now = max(root->val,max_now);
        }
        helper(root->left,count,max_now);
        helper(root->right,count,max_now);
        
    }
    
    int goodNodes(TreeNode* root) {
        int max_now=INT_MIN,count=0;
        
        helper(root,count,max_now);
        
        return count;
    }
};