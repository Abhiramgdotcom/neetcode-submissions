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
    void dfs(TreeNode* root,int count,int &max_count){
        if(!root)   return;
        if(root) count++;
        if(!root->left && !root->right) max_count=max(max_count,count);
        dfs(root->left,count,max_count);
        dfs(root->right,count,max_count);
    }
    int maxDepth(TreeNode* root) {
        int count=0;
        int max_count=0;
        dfs(root, count, max_count);
        return max_count;
    }
};
