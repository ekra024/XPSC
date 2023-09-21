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

int main()
{
    optimize();
    string s; cin >> s;
    ll na, nb, nc; cin >> na >> nb >> nc;
    ll pa, pb, pc; cin >> pa >> pb >> pc;
    ll pr; cin >> pr;
    ll bread = 0, sausage = 0, cheese = 0;

    for(ll i = 0; i < s.size(); i++) {
        if(s[i] == 'B') bread++;
        else if(s[i] == 'S') sausage++;
        else cheese++;
    }

    ll l = 0, r = 1e13, ans;

    while(l <= r) {
        ll mid = (r - l)/2 + l;
       // cout << mid << ": ";
        bool ok = true;
        ll price = pr;
        if(ok && bread) {
            ll b = na/bread;
            if(b < mid) {
                ll lagbe = (mid*bread) - na;
                ll new_bread = lagbe*pa;
                if(price < new_bread) {
                    ok = false;
                }
                else {
                    price -= new_bread;
                }
            }
        }
        if(ok && sausage) {
            ll s = nb/sausage;
            if(s < mid) {
                ll lagbe = (mid*sausage) - nb;
                ll new_sausage = lagbe*pb;
                if(price < new_sausage) {
                    ok = false;
                }
                else {
                    price -= new_sausage;
                }
            }
        }
        if(ok && cheese) {
            ll c = nc/cheese;
            if(c < mid) {
                ll lagbe = (mid*cheese) - nc;
                ll new_cheese = lagbe*pc;
                if(price < new_cheese) {
                    ok = false;
                }
                else {
                    price -= new_cheese;
                }
            }
        }

        if(ok) {
            l = mid + 1;
            ans = mid;
           // cout <<' '<< ans << "\n";
        }
        else r = mid -1 ;
    }

    cout << ans << '\n';
}

