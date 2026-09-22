# include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib(n - 1) + fib (n - 2);
}
int main () {
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << "Fibonacci series: "<< endl;
    for (int i = 0; i < n; i++) {
        cout << fib(i) << " " << endl;
    }
    return 0;
}

/*
Sample Input:
6
Your Output:
Fibonacci series: 
0 
1 
1 
2 
3 
5 
*/