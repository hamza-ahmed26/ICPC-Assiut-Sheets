// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M
#include <bits/stdc++.h>
using namespace std;
int arr[1005];

int countDistinct(int n, int arr[]) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		bool isDuplicate = false;
		for (int j = 0; j < i; j++) {
			if (arr[i] == arr[j]) {
				isDuplicate = true;
				break;
			}
		}
		if (!isDuplicate) {
			count++;
		}
	}
	return count;
}

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << countDistinct(n, arr) << endl;

	return 0;
}
