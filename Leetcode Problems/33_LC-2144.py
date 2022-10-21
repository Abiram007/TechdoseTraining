class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        count = 0
        res = 0
        cost.sort(reverse = True)
        for i in cost:
            if count==2:
                count=0
                continue
            res+=i
            #print(i,res)
            count+=1
        return res
