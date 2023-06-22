#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

bool is_permut(int l , int r, int sum)
{
    while(l <= r) {
        ll mid = (l+r)/2;
        ll ans = (mid*(mid+1))/2;
        if(ans == sum) return true;
        else if(ans > sum) r = mid-1;
        else if(ans < sum) l = mid+1;
    }

    return false;
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, s; cin >> n >> s;
        vector<int>v(n);
        ll sum = 0;
        for(int i = 0; i < n; i++) {
            int a; cin >> a;
            sum += a;
        }
        sum += s;

        if(is_permut(1, sum, sum)) cout << "YES\n";
        else cout << "NO\n";
    }
}


