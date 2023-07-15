#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int n;cin>>n;
    vector<vector<int> >v(10);
    v[0].push_back(10);
    v[0].push_back(20);
    v[0].push_back(30);

    v[1].push_back(10);

    v[2].push_back(20);
    v[2].push_back(30);

    cout<<v[2][0]<<"\n";

    cout<<v.size()<<"\n";

}