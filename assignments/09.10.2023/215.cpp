class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int ind=nums.size()-k;
        return nums[ind];
        
    }

};