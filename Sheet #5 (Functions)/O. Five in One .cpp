// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O
#include <bits/stdc++.h>
using namespace std;

int arr[105];

void maximum(int n, int arr[]) {
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx) mx = arr[i];
	cout << "The maximum number : " << mx << endl;
}

void minimum(int n, int arr[]) {
	int mn = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] < mn) mn = arr[i];
	cout << "The minimum number : " << mn << endl;
}

void primeCount(int n, int arr[]) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		int num = arr[i];
		if (num <= 1) continue;
		bool isPrime = true;
		for (int j = 2; j * j <= num; j++) {
			if (num % j == 0) { isPrime = false; break; }
		}
		if (isPrime) count++;
	}
	cout << "The number of prime numbers : " << count << endl;
}

void palindromeCount(int n, int arr[]) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		int num = arr[i], rev = 0, original = num;
		while (num > 0) {
			rev = rev * 10 + num % 10;
			num /= 10;
		}
		if (original == rev) count++;
	}
	cout << "The number of palindrome numbers : " << count << endl;
}

void maxDivisors(int n, int arr[]) {
	int maxNum = arr[0];
	int maxDivisorsCount = 0;

	for (int i = 0; i < n; i++) {
		int num = arr[i];
		int currentDivisorsCount = 0;
		for (int j = 1; j * j <= num; j++) {
			if (num % j == 0) {
				currentDivisorsCount++;
				if (j != num / j) currentDivisorsCount++;
			}
		}

		if (currentDivisorsCount > maxDivisorsCount) {
			maxDivisorsCount = currentDivisorsCount;
			maxNum = num;
		}
		else if (currentDivisorsCount == maxDivisorsCount && num > maxNum) {
			maxNum = num;
		}
	}

	cout << "The number that has the maximum number of divisors : " << maxNum << endl;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	maximum(n, arr);
	minimum(n, arr);
	primeCount(n, arr);
	palindromeCount(n, arr);
	maxDivisors(n, arr);

	return 0;
}
