// https://oj.vnoi.info/problem/vcowflix

#include <bits/stdc++.h>
using namespace std;
const int maxN = 17;
int main(){
    int c, n, w[maxN];
    cin >> c >> n;
    for(int i = 1; i <= n; ++i)
        cin >> w[i];
    int f[maxN][c + 1] = {0};
    for(int i = 0; i <= n; ++i){
        for(int j = 0; j <= c; ++j)
            f[i][j] = max(f[i-1][j], j >= w[i] ? w[i] + f[i-1][j-w[i]] : 0);
    }
    cout << f[n][c];
}
