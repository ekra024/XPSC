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

bool prime(ll n)
{

    for(ll i = 2; i*i <= n; i++) {
        if(n%i==0) {
            return false;
        }
    }

    return true;
}

int main()
{
    optimize();
    ll t; cin >> t;
    set<ll>s;
    vector<ll>v;

    for(ll i = 2; i <= 1e6; i++) {
        if(prime(i)) {
            v.push_back(i);
        }
    }

    for(ll i = 0; i < v.size(); i++) {
        s.insert(v[i]*v[i]);
    }

    while(t--) {
        ll n; cin >> n;

        auto it = s.find(n);
        if(it == s.end()) cout << "NO" << '\n';
        else cout << "YES\n";
    }
}


