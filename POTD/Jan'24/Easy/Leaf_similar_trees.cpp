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
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> v1,v2;
    void check(TreeNode *temp,vector<int> &v){
        if(temp == NULL)
            return;
        if(temp->left == NULL && temp->right == NULL){
            v.push_back(temp->val);
            return;
        }
        check(temp->left,v);
        check(temp->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear();v2.clear();
        check(root1,v1);
        check(root2,v2);
        return v1 == v2;
    }
};