#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<pair<ll, ll> >monster(n);

        for(ll i = 0; i < n; i++) cin >> monster[i].second;
        for(ll i = 0; i < n; i++) cin >> monster[i].first;

        sort(monster.begin(), monster.end());

        ll attack = 0, l = 0;

        while(l < n && k > 0) {
            attack += k;
            while(monster[l].second <= attack && l < n) l++;
            k -= monster[l].first;
        }

        if(l == n) cout << "YES\n";
        else cout << "NO\n";
    }
}



