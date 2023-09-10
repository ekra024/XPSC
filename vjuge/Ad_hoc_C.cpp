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
         cout<<"Case "<<i<<": ";
         ll temp=n;
         ll sum=0,rem;
         while(temp!=0){
            rem=temp%2;
            temp=temp/2;
            sum=sum+rem;
         }
         if(sum%2==0)cout<<"even"<<endl;
         else cout<<"odd"<<endl;
    }
}

