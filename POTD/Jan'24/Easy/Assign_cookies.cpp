class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt = 0,n = g.size(),m = s.size(),i = 0,j = 0,sum = 0;
        while(i < n && j < m){
            if(s[j] >= g[i]){
                i++;
            }
            j++;
        }
        return i;
    }
};