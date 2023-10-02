class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int r = 0; r < 9; r++){
        unordered_set<char> check_r;
        for (int c = 0; c < 9; c++){
            if (board[r][c] != '.' && check_r.find(board[r][c]) != check_r.end()){
                return false;
            }
            check_r.insert(board[r][c]);
        }
    }
    for (int c = 0; c < 9; c++){
        unordered_set<char> check_c;
        for (int r = 0; r < 9; r++){
            if (board[r][c] != '.' && check_c.find(board[r][c]) != check_c.end()){
                return false;
            }
            check_c.insert(board[r][c]);
        }
    }
    vector<unordered_set<char>> check_subbox(9);
    for (int r = 0; r < 9; r++){
        for (int c = 0; c < 9; c++){
            int loc = (r / 3) * 3 + c / 3;
            if (board[r][c] != '.' && check_subbox[loc].find(board[r][c]) != check_subbox[loc].end()){
                return false;
            }
            check_subbox[loc].insert(board[r][c]);
        }
    }
    return true;
    }
};