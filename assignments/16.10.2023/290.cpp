class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m;
        set<string>st;
        set<char>st1;
        int j=0;
        string str="";
        s.push_back(' ');
        for(auto c:pattern)st1.insert(c);
        for(int i=0;i<s.length();i++){
            if(pattern.length()==j)return false;
            if(s[i]!=' '){
                str.push_back(s[i]);
            }
            else{
                
                if(m.find(pattern[j])==m.end()){
                    m[pattern[j]]=str;
                }
                else if(m[pattern[j]]!=str)return false;
                st.insert(str);
                str.clear();
                j++;

            }
        }
        return size(st)==size(st1);

    }
};