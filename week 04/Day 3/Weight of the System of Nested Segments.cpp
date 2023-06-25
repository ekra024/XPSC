#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

struct DATA{
    ll x, w, ind;

    bool operator< const DATA & d) const{
        return (this->w<d.w);

    }

};

bool comp(DATA a, DATA d) {
    return (a.x < d.x);
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, m;
        vector<DATA>a(m);
        for(ll i = 0; i < m-1; i++) {
            //a[i].x , a[i].w;
        }
    }
}



