class Solution {
public:
    int getTime(string &s) {
        return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3));
    }
public:
    int convertTime(string current, string correct) {
        int diff = getTime(correct) - getTime(current), ops[4] = {60,15,5,1}, ans = 0;
        for (int op : ops) {
            ans += diff / op; //sooo....we checking how many times we gotta add op to current
            diff %= op; //if we add that many times of op then wut remainder?? we find it by THIS!!!
        }
        return ans; // TADAA!!!! BOOOM!!! we get no of ops
    }
};
