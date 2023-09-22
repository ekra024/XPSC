#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e7;
int hsh[N];
using namespace std;
int main()
{
    optimize();
    ll n,x;cin>>n>>x;
    deque<ll>dq;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        dq.push_back(a);
    }
    sort(dq.begin(),dq.end());

    ll cnt = 0;
    while(dq.size()>1){
        ll s = dq.back()+dq.front();
        if(s<=x){
            dq.pop_front();
            dq.pop_back();
        }
         else dq.pop_back();

         cnt++;

    }
    if(dq.size()!=0)cout<<cnt+1<<"\n";
    else
    cout<<cnt<<"\n";
}
