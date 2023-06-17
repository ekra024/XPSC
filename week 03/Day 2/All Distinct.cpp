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
        map<int, int>mp;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            mp[a]++;
        }

        ll cnt= 0, even = 0;
        for(auto it : mp) {
            if(it.second%2) cnt++;
            else if(it.second%2 == 0)even++;
        }

        if(even%2) cnt+=(even-1);
        else cnt+=even;
        cout << cnt << '\n';
    }
}

