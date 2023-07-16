#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        string s;cin>>s;
        ll b;cin>>b;
        ll sum,res=0;
        cout<<"Case "<<i<<": ";
        for(int i=0;i<s.size();i++){
            int r=s[i]-48;
            sum=r+res*10;
            if(sum<0){sum=0;continue;}
            res = sum%b;
        }

           if(res==0) cout<<"divisible"<<endl;
           else cout<<"not divisible"<<endl;


        //if(a%b==0)cout<<"divisible"<<endl;
        //else cout<<"not divisible"<<endl;
    }
}

