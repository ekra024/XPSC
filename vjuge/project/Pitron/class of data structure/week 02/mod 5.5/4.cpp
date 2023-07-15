#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n,m;
    vector<int>a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        a.push_back(k);
        s.insert(k);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int k;cin>>k;
        b.push_back(k);
        s.insert(k);
    }
    for(int i=0;i<s.size();i++)cout<<s[i]<<" ";
}
