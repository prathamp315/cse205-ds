class Solution {
public:
   int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n=tickets.size();
        int ans=tickets[k];
        for(int i=0;i<tickets.size();i++){
        if(i>k){
            if(tickets[i]<tickets[k]){
                ans+=tickets[i];
            }
            else{
                ans+=(tickets[k]-1);
            }
        }
        else if(i<k){
            if(tickets[i]<=tickets[k]){
                ans+=tickets[i];
            }
            else{
                ans+=tickets[k];
            }
        }
    }
    return ans;
}
};