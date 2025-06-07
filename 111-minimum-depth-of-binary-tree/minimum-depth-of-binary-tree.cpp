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
    #include <climits> // or #include <limits.h>

    int max_int = INT_MAX;    // 2147483647 on most systems
    int min_int = INT_MIN;
    int minDepth(TreeNode* root){
    if(root == nullptr) return 0;
    if(root->left == nullptr and root->right == nullptr){
        return 1;
    }
    int ld = root->left == nullptr ? max_int : minDepth(root->left);
    int rd = root->right == nullptr ? max_int : minDepth(root->right);
    return min(ld,rd) +1;
}
};