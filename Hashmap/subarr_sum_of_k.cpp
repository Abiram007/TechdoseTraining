class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count=0, sum=0;
        mp[sum]=1;
        for(int i=0;i<nums.size();i++){\
            sum+=nums[i];
            int target = sum - k;
            if(mp.find(target)!=mp.end()){
                count+=mp[target];
            }
            mp[sum]++;
        }
        return count;
    }
};  
