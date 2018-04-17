// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <iostream>
using namespace std;

void printStars(int n){
    for(int i = 0; i < n; ++i){
        cout << "*";
    }
}

void printSpaces(int n){
    for(int i = 0; i < n; ++i){
        cout << " ";
    }
}


int main(){
    int nLines; 
    cin >> nLines;

    int incLines = nLines / 2 + 1;

    // print nLines
    for(int lineNo = 1; lineNo <= incLines; ++lineNo){
        int nSpaces = incLines - lineNo;
        printSpaces(nSpaces);
        int nStars = 2 * lineNo - 1;
        printStars(nStars);
        cout << endl;
    }


    /*
      *****
       ***
        *
    */
    int decLines = nLines - incLines;
    for(int curLine = decLines; curLine >= 1; --curLine){
        int nSpaces = decLines - curLine + 1;
        printSpaces(nSpaces);
        int nStars = 2 * curLine - 1; 
        printStars(nStars);
        cout << endl;
    }

    
}