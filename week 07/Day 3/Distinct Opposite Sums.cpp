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
        ll n;cin>>n;
        for(int i=n/2;i>=1;i--)
            cout<<i<<" ";
        for(int i=(n/2)+1;i<=n;i++)
            cout<<i<<" ";
        cout<<"\n";
    }
}

