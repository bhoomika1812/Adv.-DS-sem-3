#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> l(n1), r(n2);

    for (int i = 0; i < n1; i++) {
        l[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++) {
        r[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (l[i] <= r[j]) {
            arr[k] = l[i];
            i++;
        }
        else {
            arr[k] = r[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = r[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main() {
    vector<int> arr = {38, 27, 43, 10, 17};

    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}