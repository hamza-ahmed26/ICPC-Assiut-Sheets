// لينك السؤال : https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <bits/stdc++.h>
using namespace std;
int main (){
    double x;
    cin >> x;
    double p;
    cin >> p;
    cout << fixed << setprecision(2);
    double price = (p * 100) / (100-x) ;
    cout << price;
    return 0;
}
