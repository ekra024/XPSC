#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v,ans(n);
    for(int i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    cout<<v[0]<<" ";
    for(int i=1;i<n;i++){
        if(v[i-1]<v[i]){
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;

}
