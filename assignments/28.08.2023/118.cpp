class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        if(numRows==0){
            return vec;
        }
        vec.push_back({1});
        for(int i=1;i<numRows;i++){
            vector<int> a;
            a.push_back(1);
            int j=1;
            while(j<i){
                a.push_back(vec[i-1][j-1]+vec[i-1][j]);
                j++;
            }
            a.push_back(1);
            vec.push_back(a);
        }
        return vec;
    }
};