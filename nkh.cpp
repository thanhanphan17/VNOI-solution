// https://oj.vnoi.info/problem/nkh

#include<bits/stdc++.h>
using namespace std;

const int maxN = 1e2 + 7;
char a[maxN], b[maxN], c[2 * maxN], res[2 * maxN];
int n;
void btrk(int i, int j, int k){
	if(i == n){
        puts(res);
        exit(0);
    }
	if(c[i] == a[j]){
        res[i] = '1';
        btrk(i + 1, j + 1, k);
    }
	if(c[i] == b[k]){
        res[i] = '2';
        btrk(i + 1, j, k + 1);
    }
}
int main(){
    scanf("%s %s %s", &a, &b, &c);
	n = strlen(c);
	btrk(0, 0, 0);
}
