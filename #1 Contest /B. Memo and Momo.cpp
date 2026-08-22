// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
#include <bits/stdc++.h>
using namespace std;
int main (){
    long long a;
    cin >> a;
    long long b;
    cin >> b; 
    long long k;
    cin >> k;
    
    if (a % k == 0 && b % k == 0)
    {
        cout << "Both";
        
    }

    else if (a % k == 0 && b % k != 0)
    {
        cout << "Memo";
    }
    else if (a % k != 0 && b % k == 0)
    {
        cout << "Momo";
    }
    else
    {
        cout << "No One";
    }
    return 0;
}
