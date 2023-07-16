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
        if(s[0]==s[1] && s[1]==s[2])cout<<"1"<<endl;
        else if(s[0]==s[1] || s[1]==s[2]||s[0]==s[2])cout<<"3"<<endl;
        else cout<<"6"<<endl;

    }
}


