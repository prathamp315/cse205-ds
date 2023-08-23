class Solution {
public:
vector<vector<int>>vec;
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>perm(n,11);
        solve(0,nums,perm);
        return vec;
    }
    void solve(int index,vector<int>&nums,vector<int>&perm){
        if(index==nums.size()){
            vec.push_back(perm);
            return;
        }
     
        for(int i=0;i<nums.size();i++){
            if(perm[i]==11){
                perm[i] =nums[index];
                solve(index+1,nums,perm);
                perm[i]=11;
            }
        }
    }
};