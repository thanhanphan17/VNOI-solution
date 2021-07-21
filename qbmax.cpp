// https://oj.vnoi.info/problem/qbmax

#include <bits/stdc++.h>
using namespace std;
const int maxN = 500 + 7;
int m, n, arr[maxN][maxN];
int main(){
    cin >> m >> n;
    for(int j = 0; j <= n; ++j)
        arr[0][j] = arr[m+1][j] = -1e9;

    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> arr[i][j];

    for(int j = 2; j <= n; ++j)
        for(int i = 1; i <= m; ++i)
            arr[i][j] += max(arr[i-1][j-1], max(arr[i][j-1], arr[i+1][j-1]));

    int result = -1e9;
    for(int i = 1; i <= m; ++i)
        result = max(result, arr[i][n]);
    cout << result;
    return 0;
}
