class Solution {
public:
    int minimumSum(int num) {
            vector<int>vec;
            pair<int,int>p;
            while(num){
                vec.push_back(num%10);
                num/=10;
                            }
                sort(begin(vec),end(vec));
                p.first=10*vec[0]+vec[2];
                p.second=10*vec[1]+vec[3];
                return p.first+p.second;

    }
};