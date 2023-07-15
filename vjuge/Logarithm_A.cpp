#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long int ll;
int main()
{
    optimize();
    double memorizedArray[1000001];
    memorizedArray[0]=0;
    for(ll i=1;i<=1000000;i++) {
         memorizedArray[i] = memorizedArray[i-1] + log(i);
    }
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,base;cin>>n>>base;
        ll result=memorizedArray[n]/log(base)+1;
        cout<<"Case "<<i<<": "<<result<<endl;
    }
}
