class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>p;
        vector<string>vec(score.size());
        for( int i=0;i<score.size();i++){
            p.push({score[i],i});
        }
        for(int i=0;i<score.size();i++){
            auto it=p.top();
            int ind=it.second;
            p.pop();
            if(i==0){
                vec[ind]="Gold Medal";
            }
            else if(i==1){

                vec[ind]="Silver Medal";
            }
            else if(i==2){
                vec[ind]="Bronze Medal";
            }
            else{
                vec[ind]=to_string(i+1);
            }

        }
        return vec;
    }
};