// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N
#include <bits/stdc++.h>
using namespace std;
int arr[1005];
int result[1005];

void shiftZeros(int n, int arr[]) {
	int index = 0;


	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			result[index] = arr[i];
			index++;
		}
	}

	while (index < n) {
		result[index] = 0;
		index++;
	}


	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	shiftZeros(n, arr);

	return 0;
}
