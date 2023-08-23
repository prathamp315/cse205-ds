    class Solution {
    public:
        vector<vector<int>> combine(int n, int k) {
        vector<vector<int>vec;
            vector<int>v;
            solve(n,k,vec,v);
            return vec;
        }
        void solve(int n,int k,vector<vector<int>>&vec,vector<int>&v){
                if(v.size()==k){
                    vec.push_back(v);
                    return;
                }
                if(n==0){
                    return;
                }
              v.push_back(n);

                solve(n-1,k,vec,v);
                v.pop_back();
                solve(n-1,k,vec,v);
            }
    };