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
    int ans=0;
    
    void avg(TreeNode* root, int& sum,int& count){
        if(root==NULL) return;
        
        sum+=root->val;
        count++;
        avg(root->left,sum,count);
        avg(root->right,sum,count);
    }
    
    void dfs(TreeNode* root){
        if(root==NULL) return;
        int sum=0;
        int count=0;
        avg(root,sum,count);
        int average = sum/count;
        if(average==root->val) ans++;
        dfs(root->left);
        dfs(root->right);
    }
    
    int averageOfSubtree(TreeNode* root) {
        
        dfs(root);
        return ans;
    }
};