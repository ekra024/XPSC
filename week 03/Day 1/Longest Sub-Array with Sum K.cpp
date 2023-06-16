#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll n, k; cin >> n >> k;
    ll sum = 0, ans = 0;
    vector<int>a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    unordered_map<ll,ll>mp;

    for(ll i = 0; i < n; i++) {
        sum += a[i];
        if(sum == k) {
            ans = max(ans, i+1);
        }
        if(mp.find(sum-k) != mp.end()) {
            ll res = mp[sum - k];
            ans = max(ans, i-res);
        }
        if(mp.find(sum) == mp.end()) {
            mp[sum] = i;
        }
    }

    cout << ans << '\n';
}


