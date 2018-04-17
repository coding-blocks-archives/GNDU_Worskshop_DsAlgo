// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <algorithm>
using namespace std;

class Pair {
public:
    int rowId;
    int colVal;
};

bool comparePair(const Pair& p1, const Pair& p2){
    return p1.colVal < p2.colVal;
}

void sortMat(int arr[][4], int m, int n){
    Pair p[4];
    for(int i = 0; i < n; ++i){
        p[i].rowId = i;
        p[i].colVal = arr[i][1];
    }

    sort(p, p + 4, comparePair);

    for(int i = 0; i < m; ++i){
        int r = p[i].rowId;
        for(int j = 0; j < n; ++j){
            cout << arr[r][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int arr[][4] = {
        {7, 5, 2, 8},
        {2, 6, 5, 9},
        {1, 1, 4, 2},
        {0, 3, 5, 9}
    };

    int n = 4;
    int m = 4;

    sortMat(arr, m , n);
}