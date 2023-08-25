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
const int N=1e6;
int mp[N];

int main()
{
    optimize();
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    int ans = 1;

    for(int i = 2; i < N; i++) {
        int cnt = 0;
        for(ll j = i; j < N; j += i) {
            cnt += mp[j];
        }
        ans = max(ans, cnt);
    }

    cout << ans << '\n';
}


