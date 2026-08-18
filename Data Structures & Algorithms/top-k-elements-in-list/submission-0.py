class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp={}
        a=[]
        for num in nums:
            mp[num]=mp.get(num,0)+1
            if mp[num] ==k:
                a.append(num)
        return a