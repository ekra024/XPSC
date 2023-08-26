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
    ll n; cin >> n;
    if(n%2) {
        n-=3;
        cout << n/2+1 << '\n';
        for(int i = 1; i <= n/2; i++) {
            cout << 2 << ' ';
        }
        cout << 3 << '\n';
    }
    else {
        cout << n/2 << '\n';
        for(int i = 1; i <= n/2; i++) {
            cout << 2 << ' ';
        }
        cout << '\n';
    }
}


