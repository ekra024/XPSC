#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e7;
int hsh[N];
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll l, r, x, a, b;
		cin >> l >> r >> x >> a >> b;
		if(a > b) swap(a, b);

		ll d = abs(l - r), p = abs(a - b), ans = 0;

		if(a == b) ans = 0;
		else if(p >= x) ans = 1;
		else if(((r - a) >= x && (r - b) >= x) || ((a - l) >= x && (b - l) >= x)) ans = 2;
		else if((b - l) >= x && (r - a) >= x && d >= x)ans = 3;
		else ans = -1;

		cout << ans <<endl;
    }
}

