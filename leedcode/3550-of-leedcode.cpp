/*
you are given an integer array "nums" return the smallest index i such that the sum of the digits
of nums[i] = i. if no such index exist return -1.
for example:- 
1. input:
[1, 3, 2] - 2 is at index 2
2. input:
[1, 10, 11] - 
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int nums, i, SUM;
    int arr[] = {1, 10, 11};
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++) {
        nums = arr[i];
        SUM = 0;
    }
    while (nums > 0) {
        SUM += nums % 10;
        nums /= 10;
    }
    if (SUM == i) {
        cout << i << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}