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
        ll b1, b2, b3; cin >> b1 >> b2 >> b3;

        ll cnt = 0;
        if(b1==0)cnt++;
        if(b2==0)cnt++;
        if(b3==0)cnt++;

        if(cnt >= 2) cout << "Water filling time\n";
        else cout << "Not now\n";
    }
}


