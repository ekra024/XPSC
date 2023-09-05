#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e4 + 5;

int Parent[1005];

int find(int v) {
    if (Parent[v] == v) return v;
    return Parent[v] = find(Parent[v]);
}

void Union(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) Parent[v] = u;
}

int main()
{
    optimize();
    ll t=1;// cin >> t;
    while(t--) {
        int node; cin >> node;
        for (int i = 1; i <= node; i++) Parent[i] = i;

        vector<pair<int, int>> deleteThis;
        for (int i = 1; i < node; i++) {
            int u, v; cin >> u >> v;
            if (find(u) == find(v)) deleteThis.push_back({u, v});
            Union(u, v);
        }

        set <int> allParent;
        for (int i = 1; i <= node; i++) allParent.insert(find(i));

        cout << deleteThis.size() << endl;
        for (auto &u : deleteThis) {
            cout << u.first << " " << u.second << " " << *allParent.begin() << " " << *(++allParent.begin()) << endl;
            allParent.erase(allParent.begin());
        }
    }
}
