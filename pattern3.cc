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
int main(){
    int nLines; 
    cin >> nLines;

    int incLines = nLines / 2 + 1;

    // print nLines
    for(int lineNo = 1; lineNo <= incLines; ++lineNo){
        // print spaces
        int nSpaces = incLines - lineNo;
        for(int curSpace = 1; curSpace <= nSpaces; ++curSpace){
            cout << " ";
        }
        // print stars
        int nStars = 2 * lineNo - 1;
        for(int curStar = 1; curStar <= nStars; ++curStar){
            cout << "*";
        }
        cout << endl;
    }


    /*
      *****
       ***
        *
    */
    int decLines = nLines - incLines;
    
}