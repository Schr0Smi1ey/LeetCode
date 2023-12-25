struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};
class Solution {
public:
    const int mod = 1e9 + 7;
    int maximizeSquareArea(int m, int n, vector<int>& h, vector<int>& v) {
        h.push_back(1);v.push_back(1);h.push_back(m);v.push_back(n);
        sort(h.begin(),h.end());sort(v.begin(),v.end());
        int p = h.size(), q = v.size();
        if(m == n){
            return ((m-1)*(n-1)) % mod;
        }
        unordered_map<int,int,custom_hash> mp1,mp2;
        for(int i=0;i<p;i++){
            for(int j = i+1;j<p;j++){
                mp1[h[j] - h[i]]++;
            }
        }
        for(int i=0;i<q;i++){
            for(int j = i+1;j<q;j++){
                mp2[v[j] - v[i]]++;
            }
        }
        int maxima = INT_MIN;
        for(auto x : mp2){
            int y = x.first;
            if (y > 0 && mp1.find(y) != mp1.end()) {
                maxima = max(maxima,y);
            }
        }
        if(maxima == INT_MIN) return -1;
        return (1LL*maxima*maxima) % mod;
    }
};