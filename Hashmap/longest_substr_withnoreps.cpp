class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0) return 0;
        vector<int> count(128,0) ;
        int start=0, max_int=INT_MIN;
        for(int i=0;i<s.size();i++){
            auto ch = s[i];
            start = max(start, count[ch]);
            max_int = max(max_int, i-start+1);
            count[ch] = i+1;
        }
        return max_int;
    }
};
