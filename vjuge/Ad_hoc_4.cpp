#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        ll n;cin>>n;
        if(n<=1 && n>=9)cout<<"Yes"<<endl;
        else{
            ll temp = n;
            ll a,rem=0;
            while(temp!=0){
                a=temp%10;
                temp/=10;
                rem=rem*10+a;
            }
            cout<<"Case "<<i<<": ";
            if(n==rem)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}

