#include<bits/stdc++.h>
class Solution {
public:
    string maximumOddBinaryNumber(string str) {
        string ans = "";
        int cnt = 0;
        for(int i=0;i<str.size();i++){
            if(str[i] == '1'){
                cnt++;
            }
        }
        ans += '1';
        cnt--;
        for(int i=0;i<str.size();i++){
            if(str[i] != '1'){
                ans+=str[i];
            }
        }
        while(cnt--){
            ans +='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};