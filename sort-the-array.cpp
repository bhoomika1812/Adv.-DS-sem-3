#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	for (int i=0; i<n; i++) {
	    cin >> arr[i];
	}
	int i, j;
	sort (arr, arr+n);
	for (i=0, j=n-1; i<j; i++, j--) {
	    cout << arr[i] << " " << arr[j] << " " ;
	}

	if (i==j) {
	    cout << arr[i];
	}
	return 0;
}


// input :
// 6
// 5 2 9 7 6 8

// output :
// 2 9 5 8 6 7