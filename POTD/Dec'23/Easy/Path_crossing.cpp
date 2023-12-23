class Solution {
public:
    pair<int,int> check(char ch){
        if(ch == 'N') return {0,1};
        if(ch == 'E') return {1,0};
        if(ch == 'S') return {0,-1};
        return {-1,0};
    }
    bool isPathCrossing(string path) {
        map<pair<int,int>,bool> mp;
        mp[make_pair(0,0)] = true;
        auto last = make_pair(0,0);
        for(int i=0;i<path.size();i++){
            auto p = check(path[i]);
            last.first += p.first;
            last.second += p.second;
            if(mp.find(last) != mp.end()){
                return true;
            }
            mp[last] = true;
        }
        // set<pair<int,int>> st;
        // st.insert({0,0});
        // auto last = make_pair(0,0);
        // for(int i=0;i<path.size();i++){
        //     auto p = check(path[i]);
        //     last.first += p.first;
        //     last.second += p.second;
        //     if(st.find(last) != st.end()){
        //         return true;
        //     }
        //     st.insert(last);
        // }
        return false;
    }
};