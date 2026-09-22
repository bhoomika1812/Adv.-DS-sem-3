#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n, int rev = 0) {
    if (n == 0) {
        return rev;
    }
    rev = rev * 10  + n % 10;
    return reverseNum (n / 10, rev);
}
int main () {
    int n;
    cin >> n;
    cout << "reverse number: " << reverseNum(n) << endl;
    return 0;
}


/*
Sample Input:
34
Your Output:
reverse number: 43
*/