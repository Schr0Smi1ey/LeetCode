class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        long long total = 0;
        unordered_map<int,bool> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++){
            total += nums[i];
            mp[i] = true;
            pq.push({nums[i],i});
        }
        vector<long long> ans;
        for(auto v : queries){
            int a = v[0],b = v[1];
            if(mp.find(a) != mp.end()){
                if(mp[a])
                    total -= nums[a];
                mp[a] = false;
            }
            while(!pq.empty() && b){
                if(mp.find(pq.top().second) != mp.end()){
                    if(mp[pq.top().second]){
                        total -= pq.top().first;
                        b--;
                    }
                    mp[pq.top().second] = false;
                }
                pq.pop();
            }
            ans.push_back(total);
        }
        return ans;
    }
};