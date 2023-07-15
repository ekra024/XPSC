#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t=1;//cin>>t;
    while(t--){
        int n;cin>>n;
        ll a[n+2]={0};
        for(int i=0;i<n-1;i++){
            ll num;cin>>num;
            a[num]++;
        }
        for(int i=1;i<=n;i++){
            if(a[i]==0){
                cout<<i<<endl;
                break;
            }
        }
    }
}


