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
    ll n; cin >> n;
    vector<ll>a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    vector<ll> v1, v2;
    ll l = 0, r = 1;

    while(r < n) {
        v1.push_back(a[l]);
        l += 2;
        v2.push_back(a[r]);
        r += 2;
    }
    if(n%2) v1.push_back(a[l]);

    reverse(v2.begin(), v2.end());

    for(auto it : v1) cout << it << ' ';
    for(auto it : v2) cout << it << ' ';
    cout << '\n';
}

