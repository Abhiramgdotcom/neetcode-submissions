class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp={}
        a=[]
        for num in nums:
            mp[num]=mp.get(num,0)+1
        s=sorted(mp.items(),key=lambda x:x[1],reverse=True)
        for i in range(k):
            a.append(s[i][0])
        return a