#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        cout<<"Case "<<i<<": "<<endl;
        ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        ll m;cin>>m;
        ll x,y;
        while(m--){
            cin>>x>>y;
            if(x>=x1 && x<=x2 && y>=y1 && y<=y2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}

