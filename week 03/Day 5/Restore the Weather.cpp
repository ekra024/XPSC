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
        vector<pair<int, int> >a;
        vector<int>b(n),ans(n);

        for(int i = 0; i < n; i++) {
            int in; cin >> in;
            a.push_back({in,i});
        }

        for(int i = 0; i < n;i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i = 0; i < n; i++) {
            if(abs(a[i].first - b[i]) <= k) {
                ans[a[i].second] = b[i];
            }
        }

        for(auto it : ans) cout << it << ' ';
        cout << '\n';
    }
}

