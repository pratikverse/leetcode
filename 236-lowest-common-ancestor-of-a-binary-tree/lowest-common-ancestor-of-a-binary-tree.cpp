/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* root, TreeNode* p, std::vector<TreeNode*>& path) {
    if (!root) return false;
    path.emplace_back(root);
    if (root == p) return true;
    if (helper(root->left, p, path) || helper(root->right, p, path)) {
        return true;
    }
    path.pop_back();
    return false;
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    vector<TreeNode*> pathP, pathQ;
    if (!helper(root, p, pathP) || !helper(root, q, pathQ)) return nullptr;
    int i = 0;
    while (i < pathP.size() && i < pathQ.size() && pathP[i] == pathQ[i]) {
        i++;
    }
    return pathP[i - 1];
}
};