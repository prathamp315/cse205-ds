class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp.push_back({ nums[i], i });
        }

        
        sort(rbegin(mp), rend(mp));
        vector<pair<int, int>> ind;

        for (int i = 0; i < k; i++) {
            ind.push_back({ mp[i].second, mp[i].first });
        }

        sort(begin(ind), end(ind));
        vector<int> ans;
        for (auto it : ind) {
            ans.push_back(it.second);
        }

        return ans;
    }
};