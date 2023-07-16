#include<bits/stdc++.h>
using namespace std;
int const N=1e7;
int hsh[N];
int main()
{
    int n;cin>>n;
    int a;
    for(int i=1;i<=n;i++){
        cin>>a;
        hsh[i] = hsh[i-1]+a;
    }
    int q;cin>>q;
    while(q--)
    {
        int l,r;cin>>l>>r;
        cout<<hsh[r]-hsh[l-1]<<"\n";
    }
}
