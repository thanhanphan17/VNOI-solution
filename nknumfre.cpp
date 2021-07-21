// https://oj.vnoi.info/problem/nknumfre

#include <bits/stdc++.h>
using namespace std;

int rvnum(int x){
    int res = 0;
    while(x > 0){
        res = res * 10 + (x % 10);
        x /= 10;
    }
    return res;
}
int main(){
    int a, b, cnt = 0;
    cin >> a >> b;
    for(int i = a; i <= b; ++i){
        int rvi = rvnum(i);
        if(__gcd(i, rvi) == 1)
            ++cnt;
    }
    cout << cnt;
}
