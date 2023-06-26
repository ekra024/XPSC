#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
vector<ll>v;

int solve(ll l, ll r)
{

    if (r - l == 1)
        return 0;
    int mid = (l + r)/ 2;
    int mal = *max_element(v.begin()+l , v.begin()+mid);
    int mar = *max_element(v.begin()+mid, v.begin()+r);
    int ans = 0;
    if (mal > mar)
    {

        ans++;
        for (int i = 0; i < (mid - l); i++)
            swap(v[l + i], v[mid + i]);
    }
    return solve(l, mid) + solve(mid, r) + ans;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            v.push_back(a);
        }

        ll ans = solve(0, n);

        if (is_sorted(v.begin(), v.end())) cout << ans << '\n';
        else cout << -1 << '\n';
        v.clear();
    }
}
