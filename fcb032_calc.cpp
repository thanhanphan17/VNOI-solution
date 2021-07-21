// https://oj.vnoi.info/problem/fcb032_calc

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    while(cin >> a >> b >> c){
        if(a + b - c == 0)
            cout << "yes" << endl;
        else if(a + c - b == 0)
            cout << "yes" << endl;
        else if(b + c - a == 0)
            cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
