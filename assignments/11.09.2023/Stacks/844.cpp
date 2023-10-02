class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>st1;
        bool flag=1;
        
        for(char c:s){
            if(c!='#')st.push(c);
            else {
                if(st.empty()){
                    continue;
                }
                else {
                    st.pop();
                }
            }

        }
        for(char x:t){
            if(x!='#')st1.push(x);
            else {
                if(st1.empty()){
                    continue;
                }
                else {
                    st1.pop();
                }
            }
        }
        if(st.size()!=st1.size())return false;
        stack<char>tempst=st;
        stack<char>tempst1=st1;
          while (!tempst.empty()) {
        if (tempst.top() != tempst1.top()) {
            flag=0;
            
            
            break;
        }
        tempst.pop();
        tempst1.pop();
        
    }
    if(flag==1)return true;
    else return false;
}
};