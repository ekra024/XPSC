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
        ll n,a,b;cin>>n>>a>>b;
        if(n==a && n==b)cout<<"Yes"<<endl;
        else if(a+b+1>=n)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
