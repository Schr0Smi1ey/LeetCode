class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<int,int> mp;set<int> st;
        for(auto x : nums){
            mp[x]++;st.insert(x);
        }
        int ans = 1;
        for(auto x : st){
            int temp = 1,cnt = 0;
            long long int flag = x;
            if(flag == 1){ // ---it's an edge case
                ans = max(ans,(mp[flag]&1)?mp[flag]:mp[flag]-1);continue; // Take the count for odd occurrences
            }
            while(flag < INT_MAX && flag != -1){ // flag is -1 while it cross the INT limit
                if(mp[flag] >= 2){ // Take the count while we have both first and last occurrences
                    cnt += 2;
                }
                else if(mp[flag] == 1){ // This will be middle element
                    cnt++;break;
                }
                else{
                    break;
                }
                flag = (flag * flag); // set the flag to the next number in the subset
                if(flag > INT_MAX) break; // if the flag cross the INT limit
            }
            ans = max(ans,(cnt&1)?cnt:cnt-1); // Take the count as odd as one will be middle element in the subset
        }
        return ans;
    }
};