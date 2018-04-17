// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 0) {
        return 1;
    }

    int smallFact = factorial(n - 1);
    int ans = n * smallFact;
    return ans;
}

void printInc(int n) {
    if (n <= 0) {
        return ;
    }

    printInc(n - 1);
    cout << n << " ";
}

void printDec(int n) {
    if (n <= 0) {
        return;
    }

    cout << n << " ";
    printDec(n - 1);
}

void printNum(int n) {
    if (n == 0) return;

    int smallNo = n / 10;
    printNum(smallNo);
    int unitDig = n % 10;
    switch (unitDig) {
    case 0 : cout << "zero" << " "; break;
    case 1 : cout << "one" << " "; break;
    case 2 : cout << "two" << " "; break;
    case 3 : cout << "three" << " "; break;
    case 4 : cout << "four" << " "; break;
    case 5 : cout << "five" << " "; break;
    case 6 : cout << "six" << " "; break;
    case 7 : cout << "seven" << " "; break;
    case 8 : cout << "eight" << " "; break;
    case 9 : cout << "nine" << " "; break;
    }
}


int main() {
    int n;
    cin >> n;
    // int ans = factorial(n);
    // cout << ans;

    // printInc(n);
    // printDec(n);
    printNum(n);

}