#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        ll a,b,first,last;cin>>a>>b;
        if(a>b){
        a=a+b-a;
        b=a+b-b;
        }
        if(a%3==0)a=(a/3)*2;
        else a=((a/3)*2)+1;
        b=b+1;
        if(b%3==0)b=(b/3)*2;
        else b=((b/3)*2)+1;

        ll res=b-a;
        cout<<"Case "<<i<<": "<<res<<endl;
    }
}
