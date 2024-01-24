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
    private:
    vector<int> digit;int ans = 0;
    bool isPalindrome(){
        int odd = 0;
        for(int i=1;i<=9;i++){
            if(digit[i]&1) odd++;
        }
        return odd <= 1;
    }
    void dfs(TreeNode *root){
        if(!root) return;
        digit[root->val]++;
        if(!root->left && !root->right){
            if(isPalindrome()) ans++;
        }
        else{
            dfs(root->left);
            dfs(root->right);
        }
        digit[root->val]--;
    }

public:
    int pseudoPalindromicPaths (TreeNode* root) {
        digit.resize(10,0);
        dfs(root);
        return ans;
    }
};