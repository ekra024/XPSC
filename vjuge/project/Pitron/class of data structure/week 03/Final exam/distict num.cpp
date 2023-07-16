#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        b[a[i]] = 1;
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(b[i]!=1){
            ans = i;
        }
    }

    cout<<ans<<endl;
}
