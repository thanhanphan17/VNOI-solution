// https://oj.vnoi.info/problem/nkabd

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 7;

int main(){
    int l, r, cnt = 0;
    cin >> l >> r;
    int sum_divisor[maxN] = {0};
    for(int i = 1; i <= r / 2; ++i){
        for(int j = i * 2; j <= r; j += i){
            sum_divisor[j] += i;
        }
    }

    for(int i = l; i <= r; ++i)
        if(sum_divisor[i] > i)
            ++ cnt;
    cout << cnt;
}
