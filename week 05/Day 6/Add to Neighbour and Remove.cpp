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
        vector<ll> a(n);
        ll total = 0, ans;
        for(ll i = 0; i < n; i++) {
            cin >> a[i]; total += a[i];
        }


        for(ll i = n; i >= 1; i--) {
            bool ok = true;
            if(total%i==0) {
                ll sum = total/i;
                ll curSum = 0;
                //cout << sum << ':';

                for(ll j = 0; j < n; j++) {
                    curSum += a[j];
                    //cout << curSum << ' ';
                    if(curSum > sum) {
                        ok = false;
                        break;
                    }
                    else if(curSum == sum){
                        curSum = 0;
                    }
                }
                if(ok) {
                    ans = n-i; break;
                }
                //cout << '\n';
            }
        }

        cout << ans << '\n';
    }
}


