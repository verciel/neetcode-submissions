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
    vector<int> rightSideView(TreeNode* root) 
    {
        if(root == NULL) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;

        int node;
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                auto it = q.front();
                q.pop();
                
                if(it->left != NULL) q.push(it->left);
                if(it->right != NULL) q.push(it->right);

                node = it->val;
            }
            ans.push_back(node);
        }

        return ans;
    }
};
