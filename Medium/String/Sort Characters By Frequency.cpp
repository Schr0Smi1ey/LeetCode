class Solution {
public:
    string frequencySort(string s) 
    {
        string result = "";
        map<char,int> mp;
        for(int i = 0; i < s.size() ; i++)
        {
            mp[s[i]]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto x : mp)
        {
            pq.push ({x.second,x.first});
        }
        int j = 0;
        while(!pq.empty())
        {
            auto i = pq.top() ; pq.pop();
            int temp = i.first;
            while(temp--)
            {
                s[j++] = i.second;
            }
        }
        return s;
    }
};