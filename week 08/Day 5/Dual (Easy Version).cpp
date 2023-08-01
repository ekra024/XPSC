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
const int N=1e5;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<pair<int,int> > ans;

        for(int i = 0; i < n; i++) cin >> a[i];

        int mx = *max_element(a.begin(), a.end());
        int mxId = max_element(a.begin(), a.end()) - a.begin();


        if(mx > 0) {
            for(int i = 0; i < 5; i++) {
                a[mxId] += a[mxId];
                ans.push_back({mxId+1, mxId+1});
            }

            for(int i = 1; i < n; i++) {
                bool ok = false;
                while(a[i-1] > a[i]) {
                    a[i] += a[mxId];
                    ans.push_back({i+1, mxId+1});
                    ok = true;
                }
                if(ok)mxId = i;
            }
        }
        else {
            for(int i = n-2; i >= 0; i--) {
                if(a[i] > a[i+1]) {
                    a[i] += a[i+1];
                    ans.push_back({i+1, i+2});
                }
            }
        }

        cout << ans.size() << '\n';
        for(auto it : ans) cout << it.first << ' '<<it.second<< '\n';

    }
}

