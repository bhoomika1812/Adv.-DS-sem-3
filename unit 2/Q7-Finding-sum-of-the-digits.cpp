# include <bits/stdc++.h>
using namespace std;

int sumDigits (int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumDigits(n);
}
int main () {
    int n;
    cin >> n;
    cout << "sum of digits of the given number: " << sumDigits(n) << endl;
    return 0;
}