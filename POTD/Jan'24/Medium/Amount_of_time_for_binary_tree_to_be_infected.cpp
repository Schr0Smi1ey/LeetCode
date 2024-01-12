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
    unordered_map<int,vector<int>> adj;
    void solve(TreeNode* root){
        if(root == NULL){
            return;
        }
        if(root->left){
            adj[root->left->val].push_back(root->val);
            adj[root->val].push_back(root->left->val);
        }
        if(root->right){
            adj[root->right->val].push_back(root->val);
            adj[root->val].push_back(root->right->val);
        }
        solve(root->left);
        solve(root->right);
    }
    int time(int start,vector<bool>&visited){
        queue<int> q;
        q.push(start);
        visited[start] = true;
        int t = -1;
        while(!q.empty()){
            t++;
            for(int level = q.size();level > 0 ; level--){
                int now = q.front();
                q.pop();
                visited[now] = true;
                for(auto x : adj[now]){
                    if(!visited[x]){
                        visited[x] = true;
                        q.push(x);
                    }
                }
            }
        }
        return t;
    }
    int amountOfTime(TreeNode* root, int start) {
        solve(root);
        vector<bool> visited(1e5+5,false);
        return time(start,visited);
    }
};