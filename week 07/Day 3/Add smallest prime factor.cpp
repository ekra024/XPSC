#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e7;
int hsh[N];
using namespace std;

int prime(int x)
{
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return i;
    }
    return x;
}
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll x,y;cin>>x>>y;
        ll ans,cnt=0,k;
        while(x<=y){
            if(x%2==0){
                k = y-x;
                cnt += (k+1)/2;
                break;
            }
            else{
                int p =prime(x);
                x += p;
                cnt++;
            }
        }

        cout<<cnt<<"\n";
    }
}


