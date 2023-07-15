#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n],mx=0,cnt=2;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
             b[i]=a[i]-a[i+1];
        }
        for(int i=0;i<n-2;i++){
            if(b[i]==b[i+1])cnt++;
            else{
                mx = max(mx,cnt);
                cnt=2;
            }
        }
        mx=max(mx,cnt);
        cout<<mx<<endl;
    }
}
