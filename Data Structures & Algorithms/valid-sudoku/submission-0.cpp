class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> arr(9, 1);
        vector<int> arr2(9, 1);
        // 1. Check Rows
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '1') { arr[0]--; if (arr[0] < 0) return false; }
                else if (board[i][j] == '2') { arr[1]--; if (arr[1] < 0) return false; }
                else if (board[i][j] == '3') { arr[2]--; if (arr[2] < 0) return false; }
                else if (board[i][j] == '4') { arr[3]--; if (arr[3] < 0) return false; }
                else if (board[i][j] == '5') { arr[4]--; if (arr[4] < 0) return false; }
                else if (board[i][j] == '6') { arr[5]--; if (arr[5] < 0) return false; }
                else if (board[i][j] == '7') { arr[6]--; if (arr[6] < 0) return false; }
                else if (board[i][j] == '8') { arr[7]--; if (arr[7] < 0) return false; }
                else if (board[i][j] == '9') { arr[8]--; if (arr[8] < 0) return false; }
            }
            arr = arr2;
        }

        // 2. Check Columns
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[j][i] == '1') { arr[0]--; if (arr[0] < 0) return false; }
                else if (board[j][i] == '2') { arr[1]--; if (arr[1] < 0) return false; }
                else if (board[j][i] == '3') { arr[2]--; if (arr[2] < 0) return false; }
                else if (board[j][i] == '4') { arr[3]--; if (arr[3] < 0) return false; }
                else if (board[j][i] == '5') { arr[4]--; if (arr[4] < 0) return false; }
                else if (board[j][i] == '6') { arr[5]--; if (arr[5] < 0) return false; }
                else if (board[j][i] == '7') { arr[6]--; if (arr[6] < 0) return false; }
                else if (board[j][i] == '8') { arr[7]--; if (arr[7] < 0) return false; }
                else if (board[j][i] == '9') { arr[8]--; if (arr[8] < 0) return false; }
            }
            arr = arr2;
        }

        // 3. Check All 9 Subgrids
        for (int rowOffset = 0; rowOffset < 9; rowOffset += 3) {
            for (int colOffset = 0; colOffset < 9; colOffset += 3) {
                arr = arr2;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char val = board[rowOffset + i][colOffset + j];
                        if (val == '1') { arr[0]--; if (arr[0] < 0) return false; }
                        else if (val == '2') { arr[1]--; if (arr[1] < 0) return false; }
                        else if (val == '3') { arr[2]--; if (arr[2] < 0) return false; }
                        else if (val == '4') { arr[3]--; if (arr[3] < 0) return false; }
                        else if (val == '5') { arr[4]--; if (arr[4] < 0) return false; }
                        else if (val == '6') { arr[5]--; if (arr[5] < 0) return false; }
                        else if (val == '7') { arr[6]--; if (arr[6] < 0) return false; }
                        else if (val == '8') { arr[7]--; if (arr[7] < 0) return false; }
                        else if (val == '9') { arr[8]--; if (arr[8] < 0) return false; }
                    }
                }
            }
        }

        return true;
    }
};