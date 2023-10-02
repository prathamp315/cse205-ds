class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        stack<int>st;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                ans-=st.top();
                st.pop();
            }
            else if(operations[i]=="D"){
                int a=2*(st.top());
               
                st.push(a);
                ans+=a;
            }
            else if(operations[i]=="+"){
                int tmp=st.top();
                st.pop();
                int x=tmp+st.top();
                st.push(tmp);
                st.push(x);
                ans+=x;
            }
            else{
                int z=stoi(operations[i]);
                st.push(z);
                ans+=z;
            }
        }
        return ans;
    }
};