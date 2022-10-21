class Solution {
public:
    int fillCups(vector<int>& amount) {
    sort(amount.begin(), amount.end());
    if (amount[2] >= (amount[1] + amount[0])) return amount[2]; 
    int sum = amount[0] + amount[1] + amount[2];  
     return (sum / 2) + (sum % 2);
    }
};
