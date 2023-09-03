class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max1 = 0;
        int mini = INT_MAX;
        
        for (auto it: prices) {
            mini = min(mini, it); 
            max1 = max(it - mini, max1); 
        }
        
        return max1; 
    }
};