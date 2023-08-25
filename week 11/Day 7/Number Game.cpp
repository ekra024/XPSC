#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define all(x) (x).begin(), (x).end()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e4 + 5;
multiset<ll> ms;

bool bs(vector<int>&a, int k,int n)
{
    multiset<int> ms(all(a));

    for (int i = 1; i <= k; i++) {
        if (ms.empty()) return false;

        int limit = k - i + 1;
        auto it = ms.upper_bound(limit);
        if(it == ms.begin()) return false;
        ms.erase(--it);

        if(!ms.empty()){
            ms.insert(*ms.begin() + limit);
            ms.erase(ms.begin());
        }
    }

    return true;
}

int main()
{
        optimize();
        ll t; cin >> t;
        while(t--) {
           int n; cin >> n;
            vector <int> arr(n);
            for (auto &u : arr) cin >> u;

            int l = 0, r = n, k;

            while(l <= r){
                int mid = (r + l)/2;

                if(bs(arr, mid, n)){
                    k = mid;
                    l = mid+1;
                }
                else r = mid-1;
            }

            cout << k << '\n';
        }
}


