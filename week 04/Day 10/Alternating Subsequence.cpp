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
        ll n; cin >> n;
        vector<ll>v(n);
        ll mxminus = INT_MIN, mxplus = INT_MIN, sum = 0;

        for(ll i = 0; i < n; i++) cin >> v[i];
        ll l = 0, r = 0;

        while(r < n) {
            if(v[r] > 0) {
                mxplus = max(mxplus, v[r]);
                if(mxminus != INT_MIN) sum += mxminus;
                mxminus = INT_MIN;
            }
            else {
                mxminus = max(mxminus, v[r]);
                if(mxplus != INT_MIN)
                    sum += mxplus;
                mxplus = INT_MIN;
            }
            r++;
        }
        if(mxplus != INT_MIN) sum += mxplus;
        if(mxminus != INT_MIN) sum += mxminus;

        cout << sum << '\n';
    }
}



