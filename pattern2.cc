/*
4 3 2 1
3 2 1
2 1
1
*/
// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
    int nLines; 
    cin >> nLines;
    for(int lineNo = nLines; lineNo >= 1; --lineNo){
        // print a line
        for(int val = lineNo; val >= 1; --val){
            cout << val;
            cout << " ";
        }
        cout << endl;
    }   
}