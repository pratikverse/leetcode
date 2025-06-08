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
     #include<climits>
    int max_int = INT_MAX;
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        if(root->left==nullptr && root->right==nullptr){
            return 1;
        }        
        int ld = maxDepth(root->left);
        int rd = maxDepth(root->right);
        return 1+max(ld,rd);
    };
};