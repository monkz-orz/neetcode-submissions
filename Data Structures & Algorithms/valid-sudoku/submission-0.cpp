class Solution {
private:
    bool isValidRow(vector<vector<char>>& board, int r){
        unordered_map<char, int> cnt;
        for(int i = 0; i < board.size(); i++){
            if(board[r][i] >= '1' && board[r][i] <= '9'){
                cnt[board[r][i]]++;
                if(cnt[board[r][i]] > 1) return false;
            }
            
        }
        return true;
    }

    bool isValidColumn(vector<vector<char>>& board, int c){
        unordered_map<char, int> cnt;
        for(int i = 0; i < board.size(); i++){
            if(board[i][c] >= '1' && board[i][c] <= '9'){
                cnt[board[i][c]]++;
                if(cnt[board[i][c]] > 1) return false;
            }
            
        }
        return true;
    }

    bool isValidBoard(vector<vector<char>>& board, int i, int j){
        unordered_map<char, int> cnt;
        for(int p = i; p < i+3; p++){
            for(int q = j; q < j+3; q++){
                if(board[p][q] >= '1' && board[p][q] <= '9'){
                cnt[board[p][q]]++;
                    if(cnt[board[p][q]] > 1) return false;
            }
                
            }
        }
        return true;
    }
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < board.size(); i++){
            if(!(isValidRow(board, i) && isValidColumn(board, i))){
                return false;
            }
        }
        for(int i = 0; i < board.size(); i += 3){
            for(int j = 0; j < board.size(); j += 3){
                if(!isValidBoard(board, i, j)){
                    return false;
                }
            }
        }
        return true;
    }
};
