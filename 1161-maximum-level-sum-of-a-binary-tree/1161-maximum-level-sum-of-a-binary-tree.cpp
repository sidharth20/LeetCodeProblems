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
    int maxLevelSum(TreeNode* root) {
        int maxSum= INT_MIN;
        int ans=0,level=0;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            level++;
            int levelSum=0;
            for(int i=q.size();i>0;i--){
                TreeNode* tmp= q.front();
                q.pop();
                levelSum += tmp->val;
                
                if(tmp->left!=NULL) q.push(tmp->left);
                if(tmp->right!=NULL) q.push(tmp->right);
            }
            
            if(levelSum > maxSum){
                ans=level;
                maxSum=levelSum;
            }
           
        }
        return ans;
    }
};