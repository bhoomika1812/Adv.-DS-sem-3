#include <bits/stdc++.h>
using namespace std;

int arraySum (int arr[], int size) {
    if (size <= 0) {
        return 0;
    }
    return arr [size -1] + arraySum (arr, size - 1);
}
int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof (arr[0]);
    int totalSum = arraySum (arr, size);
    cout << "sum of array elements";
    return 0;
}