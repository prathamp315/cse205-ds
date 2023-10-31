class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int,vector<int>>mh;
        int n=nums.size();
        for(int i:nums){
            mh.push(i);
        }
        int a=mh.top();
        mh.pop();
        int b=mh.top();

        return (a-1)*(b-1);
        
    }
};