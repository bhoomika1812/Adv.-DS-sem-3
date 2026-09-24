/*you are given two strings S and R and an array of integers with
t values. +ve values represent right rotation by the given value
and -ve integers represent left rotation by the given values.
apply these T operations on S and compare the result with R. if 
they are the same, print password accepted otherwise print try
again*/
#include <bits/stdc++.h>
using namespace std;

int main () {
    string s = "llohe";
    string r = "hello";
    int t = 3;
    int arr[] = { 2, -1, -1};
    int n = s.length();
    for (int i = 0; i < t; i++) {
        int k = arr[i];

        if (n == 0) {
            cout << "empty";
        }
        if (k > 0) {
            k = k % n;
            s = s.substr(n - k) + s.substr(0, n - k);
        }
        else if (k < 0) {
            k = (-k) % n;
            s = s.substr(k) + s.substr (0, k);
        }
    }
    if (s == r) {
        cout << "password accepted" << endl;
    }
    else {
        cout << "try again" << endl;
    }
    return 0;
}