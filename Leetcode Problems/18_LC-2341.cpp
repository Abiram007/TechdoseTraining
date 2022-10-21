class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());             
        int operation=0;                         
        
        int n=nums.size();
        for(int i=0;i<n;i++)                     
        {
            if(nums[i]>0) 
            {
                int tmp = nums[i];                 
                operation++;      
                for(int j=i;j<n;j++)               
                {
                    nums[j] = nums[j]-tmp;
                }
            }
            
        }
        return operation;
    }
};
