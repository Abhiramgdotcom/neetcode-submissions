class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        w=set(s)
        x=set(t)
        if w==x:
            return True
        return False
