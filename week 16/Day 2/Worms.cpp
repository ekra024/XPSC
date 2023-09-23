#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e7;
int hsh[N];
using namespace std;
int main()
{
    optimize();
    ll n; cin >> n;
    vector<ll>v,v2;
    for(int i=0; i<n; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    for(int i=1; i<=n; i++){
        hsh[i] = hsh[i-1] + v[i-1];
        v2.push_back(hsh[i]);
    }

    ll m; cin >> m;

    while(m--){
        ll q; cin >> q;

        auto x = lower_bound(v2.begin(),v2.end(),q);
        if(x != v2.end()){
                int idx = x - v2.begin();
                cout <<idx+1<<"\n";
        }
        else cout << "-1\n";
    }
}

