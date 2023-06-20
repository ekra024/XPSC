#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        int ans=0,res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Y'||s[i]=='e'||s[i]=='s')res++;
            if(s[i]==s[i+1])ans++;
            else if(s[i]=='Y' && s[i+1]=='s')ans++;
            else if(s[i]=='e' && s[i+1]=='Y')ans++;
            else if(s[i]=='s' && s[i+1]=='e')ans++;
        }
        if(ans==0 && res==s.size())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
