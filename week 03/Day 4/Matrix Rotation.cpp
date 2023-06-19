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
    ll t; cin >> t;
    while(t--) {
        ll a,b,c,d;cin>>a>>b>>c>>d;
        if(a<b&& a<c && b<d && c<d)cout<<"YES"<<endl;
        else if(d<c && d<b && c<a && b<a)cout<<"YES"<<endl;
        else if(c<a && c<d && a<b && d<b)cout<<"YES"<<endl;
        else if(b<d && b<a && d<c && a<c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}


