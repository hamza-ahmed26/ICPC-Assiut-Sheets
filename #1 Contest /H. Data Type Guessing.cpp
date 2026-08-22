// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k, a;
    cin >> n >> k >> a;

    long long prod = n * k;

    if (prod % a != 0) {
        cout << "double" << endl;
    } else {
        long long res = prod / a;
        if (res <= 2147483647) {
            cout << "int" << endl;
        } else {
            cout << "long long" << endl;
        }
    }
    return 0;
}
