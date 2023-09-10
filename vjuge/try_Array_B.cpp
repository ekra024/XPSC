#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        ll n;cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
        ll sum=0;
        for(ll i=0;i<n-1;i++){
            if(v[i]!=v[i+1] || v[i]!=((v[i+1])*(-1)))
                sum=sum+v[i];
        }
        sum=sum+v[n-1];
        cout<<sum<<endl;
    }
}
