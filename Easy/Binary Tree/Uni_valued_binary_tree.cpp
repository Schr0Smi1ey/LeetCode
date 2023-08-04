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
bool f = true;
class Solution 
{
public:
    void unival(TreeNode *root,int flag)
    {
        if(root==NULL)
        return ;
        if(root->val!=flag)
        {
            f = false;
        }
        unival(root->left,flag);
        unival(root->right,flag);
    }
    bool isUnivalTree(TreeNode* root) 
    {
        f=true;
        if(root==NULL)
        return true;
        unival(root,root->val);
        return f;
    }
};