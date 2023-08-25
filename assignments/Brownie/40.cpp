    class Solution {
    public:
    
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<int>vec;
            int n=candidates.size();
            vector<vector<int>>ans;
            sort(candidates.begin(), candidates.end());
            comb2(ans,0,target,n,candidates,vec);
            return ans;
            
        }
        void comb2(vector<vector<int>>&ans,int ind,int tr,int n,vector<int> &candidates,vector<int> &vec){
           
             if(tr==0){ans.push_back(vec); return;}
             if(ind>n)return;
             if(tr<0)return;
                for(int i=ind;i<n;i++){
                    vec.push_back(candidates[i]);
                    comb2(ans,i+1,tr-candidates[i],n,candidates,vec);
                    while(i<n-1 && candidates[i]==candidates[i+1])i++;
                    vec.pop_back();

                }

           
        }
        

    };