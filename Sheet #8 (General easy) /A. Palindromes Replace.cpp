// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A
#include <bits/stdc++.h>
using namespace std;
int main() {
  
    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();
    int left = 0, right = n - 1;
    bool isPossible = true;

    while (left <= right) {
        if (s[left] != '?' && s[right] != '?') {
            if (s[left] != s[right]) {
                isPossible = false;
                break;
            }
        } else if (s[left] != '?' && s[right] == '?') {
            s[right] = s[left];
        } else if (s[left] == '?' && s[right] != '?') {
            s[left] = s[right];
        } else {
            s[left] = s[right] = 'a';
        }
        left++;
        right--;
    }

    if (!isPossible) {
        cout << -1 << "\n";
    } else {
        cout << s << "\n";
    }

    return 0;
}
