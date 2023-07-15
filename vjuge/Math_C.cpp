#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,p,q;cin>>n>>p>>q;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        ll sum=0,cnt=0;
        for(ll i=0;i<n;i++){
                sum=sum+a[i];
                if(sum>q)break;
                cnt++;

        }
        cout<<"Case "<<i<<": ";
        cout<<min(p,cnt)<<endl;

    }
}
