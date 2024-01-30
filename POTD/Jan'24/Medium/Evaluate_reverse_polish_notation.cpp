class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for(auto x : tokens){
            if((x[0] == '-' && x.size() > 1) || isdigit(x[0])){
                stk.push(stoi(x));
            }
            else{
                auto op = x[0];
                int y = stk.top();
                stk.pop();
                int z = stk.top();
                stk.pop();
                if(op == '+'){
                    stk.push(y + z);
                } 
                else if(op == '-'){
                    stk.push(z - y);
                }
                else if(op == '*'){
                    stk.push(z*y);
                }
                else{
                    stk.push(z/y);
                }
            }
        }
        return stk.top();
    }
};