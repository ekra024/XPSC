#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        float m1,m2,m3,m4,m5,m6,m7,m;cin>>m1>>m2>>m3>>m4>>m5>>m6>>m7;
        if(m5>m7 && m6>m7) m=(m5+m6)/2;
        else if(m5>m6 && m7>m6 ) m=(m5+m6)/2;
        else if(m6>m5 && m7>m5) m=(m6+m7)/2;
        else m=(max(m5,max(m6,m7))+min(m5,min(m6,m7)))/2;
        float res = m1+m2+m3+m4+m;
        cout<<"Case "<<i<<": ";
        if(res>=90) cout<<"A"<<endl;
        else if(res>=80 && res<90) cout<<"B"<<endl;
        else if(res>=70 && res<80) cout<<"C"<<endl;
        else if(res>=60 && res<70) cout<<"D"<<endl;
        else if(res<60)cout<<"F"<<endl;
    }
}

