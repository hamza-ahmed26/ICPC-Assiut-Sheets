// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m, k;
    cin >> n >> m >> k;

    long long combo1 = min({n, m, k});
    
    n -= combo1;
    m -= combo1;
    k -= combo1;
    long long combo2 = min(n / 2, k);

    cout << combo1 + combo2 << "\n";

    return 0;
}
