class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mp={}
        for i,num in enumerate (nums):
            if num in mp:
                return True
            mp[num]=num
        return False