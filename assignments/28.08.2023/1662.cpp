class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str="";
        string str2="";
        for(int i=0;i<word1.size();i++){
          string s1=word1[i];
          str+=s1;
        }
        for(int i=0;i<word2.size();i++){
          string s2=word2[i];
          str2+=s2;
        }
        if(str==str2)return true;
        else return false;
    }
};