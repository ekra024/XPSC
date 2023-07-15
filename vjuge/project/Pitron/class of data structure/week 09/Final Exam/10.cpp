#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int n1;cin>>n1;
        s.insert(n1);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int n2;cin>>n2;
        s.insert(n2);
    }
    for(auto it:s)
        cout<<it<<" ";
    cout<<"\n";
}
