#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    optimize();
    ll t;cin>>t;
    ll i=0;
    while(t--){
        i++;
        double pi=2*acos(0.0);
        cout<<"Case "<<i<<": ";
        double r;cin>>r;
        double sum=r*r*pi;
        double area=4*r*r;
        cout<<showpoint;
        cout<<fixed;
        cout<<setprecision(2);
        double res=area-sum;
        cout<<(res)+pow(10,-9)<<endl;
    }
}
