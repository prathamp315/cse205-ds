class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int gpsize) {
        map<int,int>mp;
        for(int i:hand){
            mp[i]++;
        }
        for(auto it:mp){
            if(mp[it.first]>0){
                for(int i=1;i<gpsize;i++){
                    mp[it.first+i]-=mp[it.first];
                    if(mp[it.first+i]<0)return false;
                }

            }
        }
        return true;


    }
};  