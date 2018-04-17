// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <iomanip>
using namespace std;
const int D = 8;

void printBoard(int board[][D], int d){
    for(int i = 0; i < d; ++i){
        for (int j = 0;  j < d; ++j)
        {
            cout << setw(3) << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool canPlace(int board[][D], int r, int c, int d){
    return 
        r >= 0 && r < d &&
        c >= 0 && c < d &&
        board[r][c] == 0;
}

bool knightMove(int board[][D], int r, int c, int moveId){
    if (moveId == 64){
        return true;
    }

    int rowDir[] = {+2, +1, -1, -2, -2, -1, +1, +2};
    int colDir[] = {+1, +2, +2, +1, -1, -2, -2, -1};
    for(int dir = 0; dir < 8; ++dir){
        int nextR = r + rowDir[dir];
        int nextC = c + colDir[dir];
        if (canPlace(board, nextR, nextC, D) == true){
            board[nextR][nextC] = moveId;
            bool success = knightMove(board, nextR, nextC, moveId + 1);
            if (success){
                return true;
            }
            else{
                board[nextR][nextC] = 0;
            }
        }
    }
    return false;
}

int main(){
    int board[D][D] = {0};
    board[0][0] = -1;

    bool success = knightMove(board, 0,0, 1);
    if (success){
        printBoard(board, D);
    }   
    else {
        cout << "Sorry Man!!! Solution doesn't exist.";
    }
}