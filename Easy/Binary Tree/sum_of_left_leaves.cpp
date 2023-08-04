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
 int ans = 0;
class Solution {
public:
    void sum(TreeNode *root)
    {
        queue<TreeNode *> q;
        if(root)
        q.push(root);
        while(!q.empty())
        {
            TreeNode * temp = q.front();
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
                if(temp->left->left==NULL && temp->left->right==NULL)
                ans+=temp->left->val;
            }
            if(temp->right)
            q.push(temp->right);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        ans = 0;
        sum(root);
        return ans;
    }
};