class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         unordered_map<int, int> m;
        int result = 0;

        for (int a : nums) {
            if (m.find(a) != m.end()) {
                result += m[a];
                m[a]++;
            } else {
                m[a] = 1;
            }
        }

        return result;
    }
};