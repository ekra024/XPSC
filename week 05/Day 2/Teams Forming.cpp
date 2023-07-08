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
    ll t = 1;// cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll>v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        ll numOfProblem = 0;

        for(ll i = 0; i < n; i+=2) {
            numOfProblem += abs(v[i] - v[i+1]);
        }

        cout << numOfProblem << '\n';
    }
}



