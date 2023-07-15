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
        char a=' ';
        string r;
        cout<<"Case "<<i<<": ";

            if(s[0]=='h'&&s[1]=='t'&&s[2]=='t'&&s[3]=='p' && s[4]!='s'){
                s.erase(s.begin());
                s.erase(s.begin());
                s.erase(s.begin());
                s.erase(s.begin());
                r="https";
                cout<<r+s<<endl;
            }
            else cout<<s<<endl;

    }
}

