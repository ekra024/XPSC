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
        ll n;
        cin>>n;
        ll a[n];
        ll v=0,sum=0,ans=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(ll i=0;i<n-1;i++)
        {
            sum-=a[i];
            v+=a[i];
            ans=max(ans,__gcd(sum,v));
        }
        cout<<ans<<endl;
    }
}
