#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t=1;//cin>>t;
    while(t--){
        string s;cin>>s;
        ll mx=0,cnt=1;
       for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else {
            mx=max(mx,cnt);
            cnt=1;
        }
       }
       if(cnt>1)mx=max(mx,cnt);
        cout<<mx<<endl;
    }
}


