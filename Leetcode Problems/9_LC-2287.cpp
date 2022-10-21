class Solution {
public:
    int rearrangeCharacters(string s, string target) {
		map<char,int> mp;
		for(char ch:s)
			mp[ch]++;
		int count=0;
		bool flag=true;
		while(flag){
			for(char c:target){
				mp[c]--;
				if(mp[c]<0) flag=false;
			}
			if(flag==true) count++;
		}
		return count;
	}
};
