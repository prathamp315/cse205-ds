class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>vec1;
        subs(0,nums,vec1,ans);
        return ans;

    }
    void subs(int x,vector<int>& nums,vector<int>&vec1,vector<vector<int>>&ans) {
        ans.push_back(vec1);
        for(int i=x; i<nums.size(); i++){
            vec1.push_back(nums[i]);
            subs(i+1,nums,vec1,ans);
            vec1.pop_back();
        }
    }

};