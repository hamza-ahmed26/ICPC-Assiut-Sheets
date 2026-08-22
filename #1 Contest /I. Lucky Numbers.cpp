// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    
    int d1 = N / 10;
    int d2 = N % 10;
    
    if ((d2 != 0 && d1 % d2 == 0) || (d1 != 0 && d2 % d1 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
