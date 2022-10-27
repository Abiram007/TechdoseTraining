class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        x = list(set(nums))
        count = nums.count(x[0])
        for i in range(1,len(x)):
            if nums.count(x[i])%2==1:
                return False
        else:
            return True
