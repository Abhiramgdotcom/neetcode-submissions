class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp={}
        for i,num in enumerate(nums):
            differ=target-num
            if differ in mp:
                return [mp[differ],i]
            mp[num]=i