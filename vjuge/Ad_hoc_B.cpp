#include<bits/stdc++.h>
#include<math.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    ll t;cin>>t;
    for(ll i=1;i<=t;i++){
        ll n,row,col;
        cin>>n;
        ll sq=ceil(sqrt(n*1.0));
        ll x=(sq*sq)-n;
        if(x<sq){
            row=sq;
            col=x+1;
        }else{
        col = sq;
        row =(n)-((sq-1)*(sq-1));
        }
        if(sq%2==0){
            swap(col,row);
        }
        cout<<"Case "<<i<<": "<<col<<" "<<row<<endl;
    }
}
