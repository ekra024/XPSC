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
    multiset<ll> ms;
    queue<pair<ll, ll> > q;
    priority_queue<pair<ll, ll> > pq;
    ll cnt = 0;

    for(ll i = 1; i <= t; i++) {
        ll n; cin >> n;
        if(n == 1) {
            cnt++;
            ll a; cin >> a;
            ms.insert(a);
            pq.push({a, -cnt});
            q.push({a, -cnt});
        }
        else if(n == 2) {
            while(1) {
                ll val = q.front().first;
                auto it = ms.find(val);
                if(it == ms.end()) q.pop();
                else {
                    cout << q.front().second*-1 << ' ';
                    if(q.front() == pq.top()) pq.pop();
                    q.pop();
                    ms.erase(it);
                    break;
                }
            }
        }
        else if(n == 3) {
            while(1) {
                ll val = pq.top().first;
                auto it = ms.find(val);
                if(it == ms.end()) pq.pop();
                else {
                    cout << pq.top().second*-1 << ' ';
                    if(pq.top() == q.front()) q.pop();
                    pq.pop();
                    ms.erase(it);
                    break;
                }
            }
        }
    }
}


