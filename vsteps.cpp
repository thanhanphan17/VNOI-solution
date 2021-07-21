// https://oj.vnoi.info/problem/vsteps

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 7;
const int MOD = 14062008;
int main(){
    long long n, k, step[maxN], check[maxN] = {0};
    cin >> n >> k;
    for(int i = 1; i <= k; ++i){
        cin >> step[i];
        check[step[i]] = 1;
    }
    int f[maxN] = {0};
    f[1] = 1;
    for(int i = 2; i <= n; ++i)
        if(!check[i])
            f[i] = (f[i-1] + f[i-2]) % MOD;

    cout << f[n];
}
