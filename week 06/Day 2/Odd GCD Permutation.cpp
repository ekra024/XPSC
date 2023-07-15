#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mod = 1e9 + 7;
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll>ans;

        for(ll i = n; i >= 1; i--)
            ans.push_back(i);

        if(n%2) cout << -1 << '\n';
        else {
            for(auto it : ans) cout << it << ' ';
            cout << '\n';
        }
    }
}

