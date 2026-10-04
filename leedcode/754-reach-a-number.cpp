/*
Given an infinite number line. We start at 0 and can go either to the left or to the right. The condition
is that in the ith move, you must take i steps. Given a destination d, the task is to find the minimum 
number of steps required to reach that destination.

Examples:

Input: d = 2
Output: 3
Explanation: The steps taken are +1, -2 and +3.

Input: d = 10
Output: 4
Explanation: The steps taken are +1, +2, +3 and +4.
*/

#include <bits/stdc++.h>
using namespace std;

class solution {
    int destination (int target) {
        int sum = 0; // sum of moves
        int k = 0;  // current number of steps

        while (true) {
            if (sum >= target && (sum - target) % 2 == 0) {
                return k;
            }
            k++;
            sum += k;
        }
    }
};
int main () {

}