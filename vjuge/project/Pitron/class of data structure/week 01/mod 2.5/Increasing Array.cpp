#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t=1;//cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                sum+=(a[i-1]-a[i]);
                a[i]=a[i]+(a[i-1]-a[i]);
            }
        }
        cout<<sum<<endl;
    }
}


