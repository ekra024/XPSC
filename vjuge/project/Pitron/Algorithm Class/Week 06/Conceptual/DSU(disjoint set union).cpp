#include<bits/stdc++.h>
using namespace std;
const int N = 1010;

int parent[N],_rank[N];

int _find(int node)
{
    if(node == parent[node])
        return node;

    int x = _find(parent[node]);
    parent[node] = x;

    return parent[node];
}

void _union(int a, int b)
{
    a = _find(a);
    b = _find(b);

    if(_rank[a] < _rank[b])
        parent[a] = b;
    else if(_rank[b] < _rank[a])
        parent[b] = a;
    else {
        parent[b] = parent[a];
        _rank[a]++;
    }
}

int main()
{
    for(int i = 0; i < N; i++) {
        parent[i] = i;
    }

    int n,m; cin >> n >> m;

    for(int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        _union(u, v);
    }

    for(int i = 1; i <= n; i++) {
        cout << parent[i] << ' ';
    }
}
