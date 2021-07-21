// https://oj.vnoi.info/problem/qbmst

#include <bits/stdc++.h>
using namespace std;
const int maxN = 1e5 + 7;
int n, m, res = 0;
struct Edge{
    int u, v, w;
};
vector<Edge> edges;
void Init(){
    cin >> n >> m;
    edges.resize(m);
    for(Edge &e: edges){
        cin >> e.u >> e.v >> e.w;
    }
}
bool cmp(const Edge &a, const Edge &b){
    return a.w < b.w;
}
int parent[maxN];
void Kruskal(){
    for(int i = 1; i <= n; ++i)
        parent[i] = i;
    sort(edges.begin(), edges.end(), cmp);
    for(Edge &e: edges){
        if(parent[e.u] != parent[e.v]){
            res += e.w;
            int old_parent = parent[e.u];
            int new_parent = parent[e.v];
            for(int i = 1; i <= n; ++i){
                if(parent[i] == old_parent){
                    parent[i] = new_parent;
                }
            }
        }
    }
    cout << res;
}
int main(){
    Init();
    Kruskal();
}
