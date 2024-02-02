class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int l = log10(low) + 1 , r = log10(high) + 1;
        vector<int> ans;
        for(int i = l;i <= r;i++){
            for(int j = 1;j <= (9 - i + 1);j++){
                string temp = "";
                for(int k = j;k <= (j + i - 1);k++){
                    temp += (k + '0');
                }
                int x = stoi(temp);
                if(x >= low && x <= high)
                ans.push_back(x);
            }
        }
        return ans;
    }
};