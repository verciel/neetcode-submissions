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
    int ans;

    int height(TreeNode* node)
    {
        int left=0, right=0;
        if(node->left != NULL) left=1+height(node->left);
        if(node->right != NULL) right=1+height(node->right);
        ans=max(ans, left+right);
        return max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        ans=0;
        height(root);
        return ans;
    }
};
