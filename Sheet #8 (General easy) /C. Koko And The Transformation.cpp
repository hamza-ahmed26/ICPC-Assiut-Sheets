// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/C
#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    long long sumA = 0, sumB = 0;

    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        sumA += x;
    }

    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        sumB += x;
    }

    if (sumA == sumB)
        cout << "Yes\n";
    else
        cout << "No\n";

	return 0;
}
