class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s=set(nums)
        maxCount=0
        for num in nums:
            if num-1 in s:
                continue
            count=1
            while num+1 in s:
                num=num+1
                count+=1
            maxCount=max(maxCount,count)
        return maxCount