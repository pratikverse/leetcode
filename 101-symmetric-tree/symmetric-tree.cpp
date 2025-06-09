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
    bool equal(TreeNode* left, TreeNode* right){
    if(left == nullptr && right == nullptr) return 1;
    if(left == nullptr || right == nullptr) return 0;
    if(left->val != right->val) return 0;
    return equal(left->left, right->right) && equal(left->right, right->left);
}
bool isSymmetric(TreeNode* root) {
    return equal(root->left, root->right);
}
};