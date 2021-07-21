// https://oj.vnoi.info/problem/fcb032_multitable

#include <bits/stdc++.h>
using namespace std;
const int maxN = 50 + 7;
int n, arr[maxN][maxN];
vector<int> res;
int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j){
            cin >> arr[i][j];
            if(i == 1 && j == 1){
                res.push_back(sqrt(arr[i][j]));
            }
        }
    }
    for(int i = 2; i <= n; ++i){
        res.push_back(arr[i][1] / res[0]);
    }
    for(auto x: res){
        cout << x << ' ';
    }
    return 0;
}
