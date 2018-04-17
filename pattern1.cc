// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
int main(){
    int nLines;
    cout << "Plz enter nLines ";
    cin >> nLines;

    for(int curLine = 1; curLine <= nLines; ++curLine){
        // print curLine

        // print values in curLine
        for(int val = 1; val <= curLine; ++val){
            cout << val << " ";
        }
        cout << endl;
    }
}