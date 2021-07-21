// https://oj.vnoi.info/problem/vbgrass

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e2 + 7;
int r, c;
char grass[maxN][maxN];

void check(int i, int j){
    grass[i][j] = '.';
    if(grass[i][j + 1] == '#')
        check(i, j + 1);
    if(grass[i][j - 1] == '#')
        check(i, j - 1);
    if(grass[i + 1][j] == '#')
        check(i + 1, j);
    if(grass[i - 1][j] == '#')
        check(i - 1, j);
}

int main(){
    cin >> r >> c;
    for(int i = 1; i <= r; ++i)
        for(int j = 1; j <= c; ++j)
            cin >> grass[i][j];

    int cnt = 0;
    for(int i = 1; i <= r; ++i){
        for(int j = 1; j <= c; ++j){
            if(grass[i][j] == '#'){
                ++cnt;
                check(i, j);
            }
        }
    }
    cout << cnt;
}
