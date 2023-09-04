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



ll Add_Edge(ll node, vector<ll> row){
    int n=row.size();
    ll res=LLONG_MAX;
    for(ll i = 0; i < n; i++){
        res=min(res,abs(node-row[i]));
    }
    return res;
}


int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n), b(n);

        for(ll i = 0; i < n; i++) cin >> a[i];
        for(ll i = 0; i < n; i++) cin >> b[i];

        if(n == 1) {
            cout << abs(b[0] - a[0]) << '\n';
            continue;
        }

        ll ans1=abs(b[0]-a[0])+abs(b[n-1]-a[n-1]);
        ll ans2=abs(b[0]-a[n-1])+abs(b[n-1]-a[0]);

        ll ans3=abs(a[0]-b[0])+Add_Edge(a[n-1],b)+Add_Edge(b[n-1],a);
        ll ans4=abs(a[n-1]-b[n-1])+Add_Edge(a[0],b)+Add_Edge(b[0],a);
        ll ans5=abs(a[0]-b[n-1])+Add_Edge(a[n-1],b)+Add_Edge(b[0],a);
        ll ans6=abs(a[n-1]-b[0])+Add_Edge(a[0],b)+Add_Edge(b[n-1],a);

        ll ans7=Add_Edge(a[0],b)+Add_Edge(a[n-1],b)+Add_Edge(b[0],a)+Add_Edge(b[n-1],a);

        ll ans=min({ans1,ans2,ans3,ans4,ans5,ans6,ans7});

        cout << ans << '\n';
    }
}


