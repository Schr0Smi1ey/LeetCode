from typing import List
class Solution:
    def findMaxK(self, nums: List[int]) -> int:
        mp = set()
        for x in nums:
            if x < 0:
                mp.add(x)
        
        ans = -1
        for x in nums:
            if x > ans:
                if -x in mp:
                    ans = max(ans,x)
        return ans