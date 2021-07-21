// https://oj.vnoi.info/problem/liq

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 7;
int n, res, arr[maxN], f[maxN], b[maxN];
int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> arr[i];
    for(int i = 1; i <= n; ++i){
        f[i] = lower_bound(b + 1, b + res + 1, arr[i]) - b;
        res = max(res, f[i]);
        b[f[i]] = arr[i];
    }
    cout << res;
}
