#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t; cin >> t;
    for(ll i=1;i<=t;i++) {
        ll n; cin >> n;
        ll a[n];
        set<ll>s;
        for(ll i =0; i<n; i++) cin >> a[i];
        for(ll i =n-1;i>=0;i--) {
        if(s.count(a[i])==0 && s.count(-a[i])==0)
            s.insert(a[i]);
        }

        vector<ll>v(s.begin(),s.end());
        ll sum=0;
        for(ll i=0;i<v.size();i++) {
            sum=sum+v[i];
        }

        cout << "Case " << i << ": " <<sum<<endl;
    }

}
