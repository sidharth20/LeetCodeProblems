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
    int dfs(TreeNode* root, int d){
        if(!root) return d;
        
        return max(dfs(root->left,d+1), dfs(root->right,d+1));
    }
    
    int maxDepth(TreeNode* root) {
        int ans=dfs(root,0);
        
        return ans;
    }
};