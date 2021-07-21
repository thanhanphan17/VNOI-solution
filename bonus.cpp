// https://oj.vnoi.info/problem/bonus

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000 + 7;
int n, k;
long long sum[maxN][maxN] = {0};
long long res = - maxN * 1e5;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> k;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            int x;
            cin >> x;
            sum[i][j] = (sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1]) + x;
            if(i >= k && j >= k){
                res = max(res, sum[i][j] - sum[i][j-k] - sum[i-k][j] + sum[i-k][j-k]);
            }
        }
    }
    cout << res;
}
