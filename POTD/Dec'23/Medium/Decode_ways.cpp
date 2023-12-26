class Solution {
public:
    int solve(string &str,int index,vector<int>& memo){
        if(index == str.size()){
            return 1;
        }
        if(str[index] == '0'){
            return 0;
        }
        if(memo[index] != -1){
            return memo[index];
        }
        int ways = solve(str,index+1,memo);
        if((index < str.size() - 1) && (str[index] == '1' || (str[index] == '2' && str[index + 1] <= '6'))){
            ways += solve(str,index + 2 , memo);
        }
        memo[index] = ways;
        return ways;
    }
    int numDecodings(string s) {
        vector<int> memo(s.size(),-1);
        return solve(s,0,memo);
    }
};