class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> ans(grid.size()-2,vector<int>(grid.size()-2,0));
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans.size();j++){
                for(int k=i;k<i+3;k++){
                    for(int m=j;m<j+3;m++){
                        ans[i][j]=max(ans[i][j],grid[k][m]);
                    }
                }
            }
        }
        return ans;
    }
};
