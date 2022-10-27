class Solution {
public:
   bool digitCount(string s) {
    for(int i=0;s[i]; i++){
        if(count(s.begin(), s.end(), i+'0') !=  s[i]-'0')
            return false;
    }
    return true;
}
};
