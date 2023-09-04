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
vector<int> prime;

void primes()
{
    prime.push_back(2);
    for(ll i = 3; i <= 31; i+=2) {
        bool ok = true;
        for(ll j = 2; j*j <= i; j++) {
            if(i%j==0) {
                ok = false; break;
            }
        }
        if(ok) prime.push_back(i);
    }
}

int main()
{
    optimize();
    ll t; cin >> t;
    primes();
    while(t--) {
        ll n; cin >> n;
        vector<int> a(n,0), v(33, -1);
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            for(int j = 0; j < prime.size(); j++) {
                if(x%prime[j] == 0) {
                    if(v[prime[j]] == -1) {
                        cnt++; v[prime[j]] = cnt;
                    }
                    a[i] = v[prime[j]];
                    break;
                }
            }
        }

        cout << cnt << '\n';
        for(auto it : a)
            cout << it << ' ';
        cout << '\n';
    }
}


