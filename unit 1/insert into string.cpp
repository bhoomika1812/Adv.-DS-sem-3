/*you are given two strings S and R and a number n. insert R in S at every
index position which is divisible by n. print the modified S*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, R, result;
    int n;

    cout << "Enter string S: ";
    cin >> S;

    cout << "Enter string R: ";
    cin >> R;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < S.length(); i++) {
        if (i % n == 0) {
            result += R;
        }
        result += S[i];
    }

    cout << "Modified String: " << result << endl;

    return 0;
}

// Enter string S: book
// Enter string R: #
// Enter n: 2
// Modified String: #bo#ok
