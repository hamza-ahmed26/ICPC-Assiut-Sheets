// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K
#include <bits/stdc++.h>
using namespace std;
int arr[10005];
int result[10005];

void shiftRight(int n, int x, int arr[]) {
	int effectiveShift = x % n;

	for (int i = 0; i < n; i++) {
		int newIndex = (i + effectiveShift) % n;
		result[newIndex] = arr[i];
	}

	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
	cout << endl;
}

int main() {
	int n, x;
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	shiftRight(n, x, arr);

	return 0;
}
