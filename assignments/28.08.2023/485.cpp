class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cntr=0,m=0;
       
        for(int i=0;i<nums.size();i++){
         if(nums[i]==1){
          cntr++;
         }
         else{
            m=max(m,cntr);
             cntr=0;
         }
        }
        m=max(m,cntr);
        return m;
        
    }
};