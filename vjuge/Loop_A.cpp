#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
    ll a[100000],n,sum[10];cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>n;
    //for(ll i=0;i<6;i++)cin>>a[i];
    for(ll i=6;i<=n;i++){
        a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6])%10000007;
    }
    cout<<"Case "<<i<<": "<<a[n]%10000007<<endl;
    }

}
