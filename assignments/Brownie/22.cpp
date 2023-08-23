class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        para(ans,0,0,n,s);
        return ans;
    }
    void para(vector<string>&ans,int ob,int cb,int n,string s){
        if(s.size()==n*2){
            ans.push_back(s);
            return;
        }
        if(ob<n){
            para(ans,ob+1,cb,n,s+'(');
        }
        if(cb<ob){
            para(ans,ob,cb+1,n,s+')');
        }
    }
};