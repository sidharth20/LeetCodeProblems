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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        
        
        return isBalanced(root->left) && isBalanced(root->right) && abs(check_height(root->left) - check_height(root->right)) <= 1;
    }
    
    int check_height(TreeNode* root){
        if(!root) return 0;
        
        int left = 1 + check_height(root->left);
        int right = 1 + check_height(root->right);
        
        return max(left,right);
    }
};