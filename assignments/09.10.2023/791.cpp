class Solution {
public:
    string customSortString(string order, string s) {
       unordered_map<char,int>p1;
       for(auto j:s)
        p1[j]++;
        string ans="";
        for(auto it:order)
        {
            for(int i=0;i<p1[it];i++)
             ans+=it;
            p1[it]=0;
        }
        for(auto it:p1)
        {
            for(int i=0;i<it.second;i++)
             ans+=it.first;
        }
        return ans;
    }
};