#include <bits/stdc++.h>
using namespace std;

int fact (int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact (n - 1);
}
int main () {
    int n;
    cout << "enter number: ";     // not important to write
    cin >> n;
    cout << "Factorial: " << fact(n) << endl;
    return 0;
}


// Sample Input:
// 5
// Your Output:
// Factorial: 120