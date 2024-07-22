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
    int mx = 0;
    int getDistance(TreeNode* root) {
        if (root->left == NULL && root->right == NULL) return 1;
        int right = 0, left = 0;
        if (root->left) left = getDistance(root->left);
        if (root->right) right = getDistance(root->right);
        mx = max(mx, (left + right));
        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int tmp = getDistance(root);
        return mx;
    }
};