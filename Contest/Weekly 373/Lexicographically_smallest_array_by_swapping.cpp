class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end(),[&](const auto x,const auto y){
            return x.first < y.first;
        });
        vector<vector<pair<int,int>>> partition = {{v[0]}};
        for(int i=1;i<n;i++){
            if(abs(v[i].first - v[i-1].first) <= limit){
                partition.back().push_back(v[i]);
            }
            else{
                partition.push_back({v[i]});
            }
        }
        for(auto p : partition){
            vector<int> ind;
            for(auto i : p){
                ind.push_back(i.second);
            }
            sort(ind.begin(),ind.end());
            for(int i=0;i<ind.size();i++){
                nums[ind[i]] = p[i].first;
            }
        }
        return nums;
    }
};