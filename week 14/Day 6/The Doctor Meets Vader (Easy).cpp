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
const int inf = 1e9;
const int N=1e5 + 123;

int main()
{
    optimize();
    int n, m; cin >> n >> m;
    vector<int> a(n), sum (m+1);
    vector<pair<int,int> > b(m);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i].first >> b[i].second;

    sort(b.begin(), b.end());
    for(int i = 0; i < m; i++) {
        sum[i+1] = sum[i] + b[i].second;
    }

    for(int i = 0;i < n; i++) {
        int r = upper_bound(b.begin(), b.end(), make_pair(a[i],inf)) - b.begin();
        cout << sum[r] << ' ';
    }
    cout << '\n';
}

