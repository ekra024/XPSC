#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> mp;

    mp[2] = 5;
    mp[2] = 3;
    mp[1] = 4;
    mp[6] = 80;
    mp[5] = 4;
    mp[5] = 10;

    for(auto it:mp)
        cout<<it.first <<" "<<it.second<<"\n";
    
    return 0;
}