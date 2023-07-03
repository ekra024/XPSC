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
        ll n, alice = 0, bob = 0; cin >> n;
        vector<ll>v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        ll turn = 1;

        for(ll i = 0; i < n; i++) {
            if(turn == 1 && v[i]%2== 0) alice+= v[i];
            else if(turn == 2 && v[i]%2) bob += v[i];
            if(turn == 1) turn = 2;
            else turn = 1;
        }

        if(alice > bob) cout << "Alice\n";
        else if(bob > alice) cout << "Bob\n";
        else cout << "Tie\n";
    }
}



