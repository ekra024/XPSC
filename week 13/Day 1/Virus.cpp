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
        ll n, m; cin >> n >> m;
        vector<ll> a(m) , v;
        ll safe = 0, aff = 0;
        for(ll i = 0; i < m; i++) cin >> a[i];
        sort(a.begin(), a.end());

        ll f = (a[0]-1) + (n - a[m-1]);
        v.push_back(f);

        for(ll i = 0; i < m-1; i++) {
            f = (a[i+1] - a[i]) - 1;
            v.push_back(f);
        }
        sort(v.rbegin(), v.rend());

        for(ll i = 0; i < v.size(); i++){
		ll res = v[i] - aff;
		if(res < 1) break;

		if(v[i] == 1){
			safe++;
			aff += 2;
		}

		else if(v[i] > 1){
			safe++;
			res -= 2;
			aff += 2;

			if(res > 0){
				safe += res;
				aff += 2;
			}
		}
	}

        cout << n - safe << '\n';
    }
}


