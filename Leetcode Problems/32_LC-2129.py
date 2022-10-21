class Solution:
    def capitalizeTitle(self, title: str) -> str:
        ls = title.split(' ')
        lss = []
        for i in ls:
            if(len(i)>2):
                lss.append(i.capitalize())
                # print(i)
            else:
                lss.append(i.lower())
        return ' '.join(lss)
