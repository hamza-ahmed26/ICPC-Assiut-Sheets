// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
#include <bits/stdc++.h>
using namespace std;

void NewArray(int n, int arr_a[], int arr_b[]) {
	for (int i = 0; i < n; i++) {
		cout << arr_b[i] << " ";
	}
	
	for (int i = 0; i < n; i++) {
		cout << arr_a[i] << " ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;

	int arr_a[1005];
	int arr_b[1005];

	for (int i = 0; i < n; i++) {
		cin >> arr_a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> arr_b[i];
	}

	NewArray(n, arr_a, arr_b);

	return 0;
}
