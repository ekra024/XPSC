#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int p,q;cin>>p>>q;
    v.erase(v.begin()+p-1,v.begin()+q);
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}
