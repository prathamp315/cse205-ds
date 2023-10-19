class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(2);
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            v[nums[i]-1]++;
        }
        for(int i=0;i<n;i++){
            if(v[i]==0){
                ans[1]=i+1;
            }
            if(v[i]==2){
                ans[0]=i+1;
            }
        }
        return ans;
    }
};
