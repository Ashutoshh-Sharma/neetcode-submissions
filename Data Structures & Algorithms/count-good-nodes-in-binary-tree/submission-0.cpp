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
    int count = 0;

    void check(TreeNode* root, int max) {
        if (root == NULL) return;

        if (root->val >= max) {
            count++;
            max = root->val;
        }
        check(root->left, max);
        check(root->right, max);
    }
    int goodNodes(TreeNode* root) {
        check(root, INT_MIN);
        return count;
    }
};
