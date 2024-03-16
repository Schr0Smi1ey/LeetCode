class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size(), m = capacity.size();
        int total = 0;
        for(auto x : apple){
            total += x;
        }
        sort(capacity.rbegin(),capacity.rend());
        int ans = 0;
        for(auto x : capacity){
            if(total <= 0){
                break;
            }
            ans++;
            total -= x;
        }
        return ans;
    }
};