#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int fun(int num)
{
    int temp=num;
    int cnt=1,rem,sum=0;
    while(temp!=0){
        rem=temp%2;
        temp/=2;
        sum=sum+rem*cnt;
        cnt=cnt*10;
    }
    return sum;
}
int main()
{
    optimize();
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        int a1,b1,c1,d1,a3,b3,c3,d3;
        char ch1,ch2,ch3;
        cin>>a1>>ch1>>b1>>ch2>>c1>>ch3>>d1;
        int a2,b2,c2,d2;
        char ch11,ch12,ch13;
        cin>>a2>>ch11>>b2>>ch12>>c2>>ch13>>d2;
        a3=fun(a1);
        b3=fun(b1);
        c3=fun(c1);
        d3=fun(d1);
        cout<<"Case "<<i<<": ";
        if(a2==a3 && b2==b3 && c2==c3 && d2==d3) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
