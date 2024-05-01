class Solution {
public:
    long long wonderfulSubstrings(string word) {
        map<long long,long long> mp;
        mp[0] = 1; // For Empty String
        long long ans = 0,cumXor = 0;

        for(auto ch : word){
            long long shift = ch - 'a';
            cumXor ^= (1 << shift);
            ans += mp[cumXor]; // For even frequencies
            for(char c = 'a';c <= 'j';c++){ // For Odd(1)-Even frequencies
                long long shift = c - 'a';
                ans += mp[cumXor ^ (1 << shift)];
            }
            mp[cumXor]++;
        }
        return ans;
    }
};

