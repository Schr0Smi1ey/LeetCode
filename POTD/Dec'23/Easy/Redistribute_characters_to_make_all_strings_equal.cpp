class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int fre[26] = {0} , n = words.size();
        for(int i=0;i<n;i++){
            for(int j = 0;j < words[i].size();j++){
                fre[words[i][j] - 'a']++;
            }
        }
        for(int i=0;i<26;i++){
            if(fre[i] == 0) continue;
            if(fre[i] % n != 0){
                return false;
            }
        }
        return true;
    }
};