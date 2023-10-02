class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string str="";
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='*')str.pop_back();
            else{
               str+=c;

            }
        }
   
    return str;
        
    }
};