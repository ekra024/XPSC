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
        ll n, m, k; cin >> n >> m >> k;

        if(m < n-1 || m > (n*(n-1))/2) cout << "NO\n";
        else if(m == (n*(n-1))/2 && k > 2) cout << "YES\n";
        else if(n==1 && k > 1) cout << "YES\n";
        else if(m == n-1 && k > 3) cout << "YES\n";
        else if((m> n-1 && m < (n*(n-1))/2) && k > 3) cout << "YES\n";
        else cout << "NO\n";
    }
}


