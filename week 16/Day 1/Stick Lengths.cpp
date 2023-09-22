#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e7;
int hsh[N];
using namespace std;
int main()
{
    optimize();
    ll n;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll mid = v.size()/2;
    ll mid_val = v[mid];
    ll cost = 0;
    for(ll i=0;i<n;i++){
        cost += abs(mid_val - v[i]);
    }
    cout<<cost<<"\n";
}

