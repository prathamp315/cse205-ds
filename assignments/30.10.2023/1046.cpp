class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>>p;
        for(int s:stones){
            p.push(s);
        }
        while(!p.empty()){
            if(p.size()==1){
               return p.top(); 
               p.pop();
            }
            else if(p.size()==2){
                int a=p.top();
                p.pop();
                int b=p.top();
                p.pop();
                return abs(a-b);
            }
            else if(p.size()>2){
                int x=p.top();
                p.pop();
                int y=p.top();
                p.pop();
                if(x!=y){
                p.push(abs(x-y));
                }
            }
        }
    return 0;
    }
};