class Solution {
public:
    int dis(char a,char b){
        if(a > b)
            swap(a,b);
        return min(abs(b - 'a' - (a - 'a')),abs(b - 'a' - (a - 'a') - 26));
    }
    string getSmallestString(string s, int k) {
        int n = s.size();
        string ans = s;
        for(int i = 0;i < n;i++){
            if(k > 0){
                char ch = 'a';
                while(dis(s[i],ch) > k){
                    ch++;
                }
                ans[i] = ch;
                k -= dis(s[i],ch);
            }
        }
        return ans;
    }
};