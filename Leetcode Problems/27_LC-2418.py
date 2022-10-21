class Solution:
    def sortPeople(self, names: List[str], heights: List[int]) -> List[str]:
        s_list = heights.copy()
        s_list.sort()
        a = []
        for i in s_list:
            a.append(names[heights.index(i)])
        return a[::-1]
