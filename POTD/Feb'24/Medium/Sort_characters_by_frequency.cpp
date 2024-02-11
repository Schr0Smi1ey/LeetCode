class Solution {
public:
    string frequencySort(string s){
        map<char,int> mp;
        for(auto x : s){
            mp[x]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto x : mp){
            pq.push ({x.second,x.first});
        }
        s = "";
        while(!pq.empty()){
            auto i = pq.top() ; pq.pop();
            int temp = i.first;
            while(temp--){
                s += i.second;
            }
        }
        return s;
    }
};