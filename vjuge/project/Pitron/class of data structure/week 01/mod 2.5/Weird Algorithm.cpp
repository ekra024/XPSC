#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t=1;//cin>>t;
    while(t--){
       ll n;cin>>n;
       while(n!=1){
            cout<<n<<" ";
            if(n%2==0)n /= 2;
            else n=(n*3) +1;
       }
       cout<<n<<endl;

    }
}

