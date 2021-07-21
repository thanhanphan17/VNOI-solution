// https://oj.vnoi.info/problem/nkpalin

#include <bits/stdc++.h>
using namespace std;
const int maxN = 2000 + 7;
string s1, s2;
int m, n, f[maxN][maxN];
void lcs(){
    m = s1.size();
    n = s2.size();
    s1 = " " + s1;
    s2 = " " + s2;
    for(int i = 1; i <= m; ++i){
        for(int j = 1; j <= n; ++j){
            if(s1[i] == s2[j])
                f[i][j] = f[i-1][j-1] + 1;
            else
                f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    }
    //cout << f[m][n];
}
void trace(){
    string res = "";
    while(m * n != 0){
        if(s1[m] == s2[n]){
            res += s1[m];
            m--, n--;
        }
        else if(f[m][n] == f[m-1][n]) m--;
        else n--;
    }
    cout << res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> s1;
    s2 = s1;
    reverse(s2.begin(), s2.end());
    lcs();
    trace();
}
