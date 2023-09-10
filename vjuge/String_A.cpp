#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    char ch;
    cin>>ch;
    string s;getline(cin,s, static_cast<char>(EOF));
    s=ch+s;
    ll a=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='"' && a==0){
                a=1;
                cout<<"``";
        }
        else if(s[i]=='"' && a==1){
            a=0;
            cout<<"''";

        }
        else if(s[i]==' ')cout<<" ";
        else cout<<s[i];
    }

}
