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
    ll n; cin >> n;
    if(n%2==0) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        vector<ll> ans;
        ans.push_back(1);
        for(ll i = 4; i <= 2*n; i+=4) {
            ans.push_back(i);
            ans.push_back(i+1);
        }

        for(ll i = 2; i <= 2*n; i+=4) {
            ans.push_back(i);
            ans.push_back(i+1);
        }

        for(ll i = 0; i < 2*n; i++)
            cout<< ans[i] << ' ';
        cout << '\n';
    }
}


