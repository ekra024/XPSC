#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) a/(b/__gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5 + 123;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        b[i]--;
    }

    if (k == 1) {
        for (int i = 0; i < n; i++) {
            if (b[i] != i) {
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
        return;
    }

    vector<int> vis(n, -1);
    for (int i = 0; i < n; i++) {
        int j = i;
        while (vis[j] == -1) {
            vis[j] = i;
            j = b[j];
        }
        if (vis[j] == i) {
            int len = 0;
            int x = j;
            do {
                len++;
                x = b[x];
            } while (x != j);
            if (len != k) {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        solve();
    }
}

