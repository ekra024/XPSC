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
        if(n==2 || n==3)cout<<"NO SOLUTION"<<endl;
        else{
            for(int i=2;i<=n;i+=2)cout<<i<<" ";
            for(int i=1;i<=n;i+=2)cout<<i<<" ";
        }
    }
}


