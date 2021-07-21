// https://oj.vnoi.info/problem/fcb002_demso

#include <bits/stdc++.h>

using namespace std;
const int maxN = 1e5 + 7;
string arr[maxN];
int main(){
    int n, cntneg = 0, cntzero = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> arr[i];
        if(arr[i][0] == '-')
            ++cntneg;
        if(arr[i][0] == '0')
            ++cntzero;
    }
    cout << cntneg << ' ' << (n - cntneg - cntzero);
}
