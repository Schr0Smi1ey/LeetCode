class Solution {
    private:
    int ans = 0;
    void maxDiff(TreeNode*root,int maxVal,int minVal){
        if(!root){
            return;
        }
        ans = max({ans,abs(minVal - root->val),abs(maxVal - root->val)});
        maxVal = max(maxVal,root->val);
        minVal = min(minVal,root->val);
        maxDiff(root->left,maxVal,minVal);
        maxDiff(root->right,maxVal,minVal);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        if(!root){
            return 0;
        }
        maxDiff(root,root->val,root->val);
        return ans;
    }
};