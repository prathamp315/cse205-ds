class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         int n = nums.size();
        vector<int> tmp=nums;

        vector<int> ans;

        for (int i = 0; i < nums.size();i++) {
            tmp.push_back(nums[i]);
        }

        for (int i = 0; i < n; i++) {
            int a = tmp[i];
            int j = i + 1;
            while (j < tmp.size()) {
                if (tmp[j] > a) {
                    a = tmp[j];
                    break;
                }
                j++;
            }

            if (a != tmp[i]) {
                ans.push_back(a);
            } else {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};