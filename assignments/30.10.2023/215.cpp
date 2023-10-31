class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>q;
        for(int n:nums){
            q.push(n);
        }
        int a;
        while(k!=0){
             a=q.top();
            q.pop();
            k--;
        }
        return a;
        
    }

};