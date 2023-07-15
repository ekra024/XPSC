#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,m;cin>>n>>m;
        vector<ll>a(n);
        char ch;
        for(ll i=0;i<n;i++)cin>>a[i];
        ll D,M,K,Y,Z;
        for(ll i=0;i<m;i++){
            cin>>ch;
            if(ch=='S'){
                cin>>D;
                for(ll i=0;i<n;i++){
                    a[i]=a[i]+D;
                }
            }
            if(ch=='M'){
                cin>>D;
                for(ll i=0;i<n;i++){
                    a[i]=a[i]*D;
                }
            }
            if(ch=='D'){
                cin>>K;
                for(ll i=0;i<n;i++){
                    a[i]=a[i]/K;
                }
            }
            if(ch=='R'){
                ll b[n];
                for(ll i=0;i<n;i++)b[i]=a[i];
                a.clear();
                for(ll i=0;i<n;i++)a[i]=b[n-1-i];

                }

            if(ch=='P'){
                cin>>Y>>Z;
                swap(a[Y],a[Z]);
            }
        }
        cout<<"Case "<<i<<": "<<endl;
        for(ll i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}
