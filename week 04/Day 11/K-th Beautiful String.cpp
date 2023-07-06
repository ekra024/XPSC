#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
vector<char>v;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;

        ll cnt = 1, val;
        for(ll i = 1; ;) {
           val = i;
           i++;
           cnt+=i;
           if(cnt >= k) break;
        }

        v.resize(n, 'a');
        if(k == 1) {
            v[n-1] = 'b';
            v[n-2] = 'b';
            for(auto it : v) cout << it;
            cout << '\n'; v.clear();
            continue;
        }
        ll diff = cnt - k;
        ll idx1 = n-2-val , idx2 = idx1 + diff+1;
        v[idx1] = 'b';
        v[idx2] = 'b';

        for(auto it : v) {
            cout << it;
        }
        cout << '\n';
        v.clear();
    }
}



