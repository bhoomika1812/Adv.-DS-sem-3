#include <bits/stdc++.h>
using namespace std;

string dectobin (int n) {
    if (n <= 1) {
        return to_string (n);
    }
    return dectobin (n/2) + to_string (n%2);
}
int main () {
    int n;
    cin >> n;
    cout << dectobin (n);
}