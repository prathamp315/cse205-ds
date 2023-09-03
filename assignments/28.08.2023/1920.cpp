class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v;
        for (int i = 0; i < nums.size(); i++){
            int n = nums[i];
            v.push_back(nums[n]);
        }

        return v;
    }
};