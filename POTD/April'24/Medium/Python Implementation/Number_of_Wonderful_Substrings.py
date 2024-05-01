class Solution:
    def wonderfulSubstrings(self, word: str) -> int:
        mp = {0:1}
        ans = 0
        cumXor = 0
        for i in range(0,len(word),1):
            shift = ord(word[i]) - ord('a')  # ord() returns the ASCII code for a one-character string
            cumXor ^= (1 << shift)
            ans += mp.get(cumXor,0)
            for shift in range(0,11,1):
                ans += mp.get(cumXor ^ (1 << shift),0)
            mp[cumXor]  = mp.get(cumXor,0) + 1 # mp.get(cumXor,0) returns the value of cumXor if it is present in the dictionary, otherwise it returns 0 .This method is to avoid keyError.
        return ans 