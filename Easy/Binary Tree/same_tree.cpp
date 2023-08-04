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
    vector<pair<int,int>> v1,v2;

    // Track the value with thier level
    void check(TreeNode *root,vector<pair<int,int>> &v,int level)
    {
        queue<TreeNode *> q;
        if(root)
        q.push(root);
        while(!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            v.push_back({temp->val,level});
            if(root->left)
            check(root->left,v,level+1);
            else
            v.push_back({0,level+1}); // for empty child
            if(root->right)
            check(root->right,v,level+1);
            else 
            v.push_back({0,level+1});
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        v1.clear();v2.clear();
        check(p,v1,1);
        check(q,v2,1);
        return v1==v2;
    }
};