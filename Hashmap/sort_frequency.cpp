class Solution {
public:
    string frequencySort(string s) {
        string str="";
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:mp){
            pq.push({it.second, it.first});
        }
        while(pq.size()){
            char ch = pq.top().second;
            int freq = pq.top().first;
            while(freq--){
                str+=ch;
            }
            pq.pop();
        }
        return str;
    }
};
