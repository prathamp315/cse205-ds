class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> map;
        for (int x: nums) map[x]++;
        int maxm = INT_MIN;
        unordered_map <int, vector<int>> newmap;
        for (pair<int, int> p: map) {
            newmap[p.second].push_back( p.first);
            maxm = max (maxm, p.second);
        }
        vector<int> ans;
        while (k) {
            if (newmap.find(maxm) != newmap.end()) {
                for (int x: newmap[maxm]) {ans.push_back(x); k--;}
            }
            maxm--;
        }
        return ans;
    }
};