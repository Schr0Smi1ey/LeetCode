class Solution {
public:
    int maxDepth(string s) {
        stack<char> stk;
        int ans = 0,temp = 0,flag = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '('){
                stk.push(s[i]);
                temp++;
                flag = max(flag,temp);
            }
            else if(s[i] == ')'){
                if(!stk.empty()){
                    stk.pop();
                    temp--;
                }
            }
            if(stk.size() == 0)
                ans = max(ans,flag);
        }
        return ans;
    }
};