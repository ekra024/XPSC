#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t=1;//cin>>t;
    while(t--){
        ll l,r;cin>>l>>r;
        string s;cin>>s;
        reverse(s.begin()+(l-1),s.begin()+r);
        cout<<s<<endl;
    }
}


