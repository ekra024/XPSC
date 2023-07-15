#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    map<int,int>mp;


    for(int i=1;i<=n;i++)
    {
        int in;
        cin>>in;
        mp[in]++;
    }
    for(auto it:mp)
    cout<<it.first<<" "<<it.second<<"\n";
}