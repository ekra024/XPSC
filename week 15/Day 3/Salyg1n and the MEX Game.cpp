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
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        int mex = -1;
        for(int i = 0; i < n; i++) {
            if(a[i] > i) {
                mex = i;
                break;
            }
        }
        if(mex == -1) mex =n;
        int bob = INT_MAX, turn = 0;
        bool alice = true;

        while(true) {
            if(turn > (2*n)+1 or bob == -1) break;
            if(alice) {
                if(bob <= mex) {
                    cout << bob << endl;
                    cout.flush();
                }
                else {
                    cout << mex << endl;
                    cout.flush();
                }
            }
            else cin >> bob;
            alice ^= true;
            turn++;
        }
    }
}
