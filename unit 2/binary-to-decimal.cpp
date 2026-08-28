#include <bits/stdc++.h>
using namespace std;

string bintodec (int n) {
    if (n<=1) {
        return 0;
    }
    return (n/10) * 2 + (n%10);
}
int main () {
    int n;
    cin >> n;
    cout << bintodec (n);
}
