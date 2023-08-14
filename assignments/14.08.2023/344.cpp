class Solution {
public:
    
      void rever(string& str,int begin,int end) {
        //base case
        if(begin>end)
        {
            return; 
        }
        swap(str[begin],str[end]);
        begin++;
        end--;
        rever(str,begin,end);
    }
    void reverseString(vector<char>& s){
    string str;
    for(int i=0; i<s.size(); i++){
        str+=s[i];
    }        
    rever(str,0,str.length()-1);
    for(int i=0; i<s.size(); i++){
        s[i]=str[i];    
    }

    }
  
};