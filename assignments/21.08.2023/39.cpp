class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>ans;
        solve(0,0,candidates,result,ans,target);
    return result;
    }
    void solve(int index,int sum,vector<int>& candidates,vector<vector<int>>&result,vector<int>& ans,int target) {
        if(index==candidates.size()){
            return;
        }
        if(sum>=target){
            if(sum==target){
                result.push_back(ans);
            }
            return;
        }
        ans.push_back(candidates[index]);
        sum+=candidates[index];
        solve(index,sum,candidates,result,ans,target);

        ans.pop_back();
        sum-=candidates[index];
        solve(index+1,sum,candidates,result,ans,target);
    }
};