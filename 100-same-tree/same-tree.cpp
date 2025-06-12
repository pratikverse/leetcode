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
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;            // Both are null → same
    if (!p || !q) return false;           // Only one is null → not same
    if (p->val != q->val) return false;   // Mismatched values → not same
    
    // Recurse on left and right subtrees
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

};