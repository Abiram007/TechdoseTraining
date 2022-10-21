class Solution:
    def checkDistances(self, s: str, distance: List[int]) -> bool:
        x = set(s)
        for i in x:
            dist = s.index(i,s.index(i)+1) - s.index(i)-1
            #print(i,dist)
            if not dist == distance[ord(i)-97]:
                return False
        return True
