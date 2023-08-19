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
         ll n,m,d; cin>>n>>m>>d;
        vector<ll>a(m);
        for(int i=0;i<m;i++) cin >> a[i];

        ll sum = m;
        for(int i=0;i<m-1;i++)
        {
            ll cur = a[i];
            ll nxt = a[i+1];
            sum += (nxt - cur - 1) / d;
        }

        if(a[0] != 1)
        {
            sum += (a[0] - 2) / d;
            sum += 1;
        }

        sum += (n-a[m-1])/d;
        vector<ll> con(m);
        ll ans = 1e18;

        for(int i=1;i<m-1;i++)
        {
            ll prv = a[i-1];
            ll nxt = a[i+1];
            ll now = a[i];
            ll tmp = sum;
            tmp -= (now - prv -1) /d;
            tmp -= (nxt - now -1) /d;
            tmp--;

            tmp += (nxt-prv-1)/d;
            con[i] = tmp;
            ans = min(ans , tmp);
        }

        {
            ll tmp = sum;
            if(a[0] != 1)
            {
                tmp -= (a[0] - 2) / d;
                tmp -= 1;
            }
            tmp--;
            tmp -= (a[1]-a[0]-1)/d;
            tmp += (a[1] - 2)/ d;
            tmp++;
            ans = min(ans , tmp);
            con[0] = tmp;
        }
        {
            ll tmp = sum;
            tmp -= (n-a[m-1])/d;
            tmp--;
            tmp -= (a[m-1]-a[m-2]-1)/d;
            tmp += (n-a[m-2])/d;
            ans = min(ans , tmp);
            con[m-1] = tmp;
        }

        ll cnt = 0;
        cout << ans << ' ';
        for(int i=0;i<m;i++)
        {
            cnt += (con[i] == ans);
        }
        cout<<cnt<<"\n";

        }
}

