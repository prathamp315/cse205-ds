class Solution {
public:
     int largestInteger(int num) {
        priority_queue<int, vector<int>> podd;
        priority_queue<int, vector<int>> peven;

        string a = to_string(num);

        for (auto it : a) {
            if ((it ) % 2 == 0) {
                peven.push(it);
            }
            else {
                podd.push(it);
            }
        }

        string b;

        for (auto it : a) {
            if ((it) % 2 == 0) {
                b += peven.top();
                peven.pop();
            }
            else {
                b += podd.top();
                podd.pop();
            }
        }

        return stoi(b);
    }
};  