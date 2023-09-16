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

void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n);
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    if(sum%n)
    {
        cout<<"No\n";
        return;
    }
    ll avg = sum/n;

    vector<int>cnt(35,0);

    for(int i=0; i<n; i++)
    {
        ll baki = a[i] - avg;
        if(baki==0)
            continue;

        int add = -1;
        int rem = -1;
        for(int y=0; y<=30; y++)
        {
            ll k = baki + (1ll << y);
            int on = __builtin_ctzll(k);
            if(k>0 && __builtin_popcountll(k)==1)
            {
                add = y;
                rem = on;
            }
        }
        if(add==-1)
        {
            cout<<"No\n";
            return;
        }
        cnt[add]++;
        cnt[rem]--;
    }
    for(int i=0; i<cnt.size(); i++)
    {
        if(cnt[i])
        {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}


int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        solve();
    }
}


