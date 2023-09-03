class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        vector<int> v,v1;
        v=nums;
        while(true){
            if(v.size()==1)
                break;
            else{
                v1=v;
                v.clear();
                for(int i=0;i<v1.size()-1;i++){
                    int x=v1[i]+v1[i+1];
                    if(x<10)
                        v.push_back(x);
                    else
                        v.push_back(x-10);
                }
            }
        }
        return v[0];
    }
};