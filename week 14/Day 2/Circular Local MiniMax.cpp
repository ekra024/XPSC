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

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n), b(n);
        for(ll i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        if(n%2) {
            cout << "NO\n";
            continue;
        }

        ll l = 0;
        for(ll i = 0; i < (n+1)/2; i++) {
           b[l] = a[i];
           l += 2;
        }
        l = 1;
        for(ll i = n/2; i < n; i++) {
            b[l] = a[i];
            l += 2;
        }

//        for(auto it : b) cout << it << ' ';
//        cout << '\n';

        bool ok = true;

        for(ll i = 1; i < n-1; i++) {
            if(b[i]>b[i+1] && b[i] > b[i-1]) continue;
            else if(b[i] < b[i+1] && b[i] < b[i-1]) continue;
            else {
                ok = false; break;
            }
        }

        if(ok){
            cout << "YES\n";
            for(auto it : b) cout << it << ' ';
            cout << '\n';
        }
        else cout << "NO\n";
    }
}


