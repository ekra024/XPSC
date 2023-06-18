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
        string s; cin >> s;
        ll sum = 0;
        vector<ll>ans, large, small;

        for(ll i = 0; i < n; i++) {
            ll cnt;
            if(s[i] == 'R') cnt = n- (i+1);
            else cnt = i;
            ll mx = max(n-(i+1) , i);
            //cout << cnt << ' '<< mx << '\n';
            if(cnt < mx)small.push_back(mx - cnt);
            else large.push_back(mx - cnt);
            sum += mx;
        }
//        for(auto it : small) cout << it << ' ';
//        cout << '\n';

        ll sz = small.size() , l = 0, res = sum;
        sort(small.begin(), small.end());
        while(sz > 1) {
            res -= small[l];
            ans.push_back(res);
            l++;
            sz--;
        }

        ll siz;
        if(small.size())siz = n-small.size()+1;
        else siz = n;
        reverse(ans.begin(), ans.end());
        while(siz--) {
            ans.push_back(sum);
        }

        for(auto it : ans) cout << it << ' ';
        cout << '\n';
    }
}

