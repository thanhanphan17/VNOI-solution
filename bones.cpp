// https://oj.vnoi.info/problem/bones

#include <bits/stdc++.h>

using namespace std;

int main(){
    int s1, s2, s3;
    map<int, int> cnt;
    cin >> s1 >> s2 >> s3;
    for(int i = 1; i <= s1; ++i){
        for(int j = 1; j <= s2; ++j){
            for(int k = 1; k <= s3; ++k){
                int sum = i + j + k;
                cnt[sum]++;
            }
        }
    }
    int res = 0, MAX = 0;
    for(int i = 1; i <= (s1 + s2 + s3); ++i){
        if(cnt[i] > MAX){
            MAX = cnt[i];
            res = i;
        }
    }
    cout << res;
}
