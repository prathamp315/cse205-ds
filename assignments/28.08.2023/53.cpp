class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int max = INT_MIN, maxend = 0;
 
    for (int i = 0; i < nums.size(); i++) {
        maxend = maxend +nums[i];
        if (max < maxend)
            max = maxend;
 
        if (maxend < 0)
            maxend = 0;
    }
    return max;
    }
};