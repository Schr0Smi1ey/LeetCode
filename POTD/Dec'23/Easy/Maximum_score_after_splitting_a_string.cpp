class Solution {
public:
    int maxScore(string s) {
        int ans = INT_MIN, n = s.size();
        int zero[501] = {0},one[501] = {0};
        for(int i = 0;i < n;i++){
            if(s[i] == '0') zero[i]++;
            else one[i]++;
        }
        for(int i=1;i<n;i++) zero[i] += zero[i-1];
        for(int i=n-2;i>=0;i--) one[i] += one[i+1];
        for(int i=0;i<n-1;i++){
            ans = max(ans,zero[i] + one[i+1]);
        }
        return ans;

        // int ans = INT_MIN,zero = 0;
        // for(int i = 0;i < s.size() - 1;i++){
        //     if(s[i] == '0') zero++;
        //     int one = 0;
        //     for(int j = i+1;j < s.size();j++){
        //         if(s[j] == '1') one++;
        //     }
        //     ans = max(ans,zero + one);
        // }
        // return ans;
    }
};