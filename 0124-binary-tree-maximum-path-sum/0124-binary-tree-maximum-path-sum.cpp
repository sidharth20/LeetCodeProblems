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
    int sum;
public:
    int maxPathSum(TreeNode* root) {
        sum = INT_MIN;
        helper(root);
        return sum;
    }
    
    int helper(TreeNode* root){
        if(!root) return 0;
        
        int left = max(0,helper(root->left));
        int right = max(0,helper(root->right));
        
        sum = max(sum, left+right+root->val);
        
        return max(left,right) + root->val;
    }
};