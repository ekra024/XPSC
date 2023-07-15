#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector< pair< pair<string,string> ,int > > v;

    for(int i=1;i<=n;i++){
        string fullName,nickName;
        int age;
        cin >> fullName >>nickName;
        cin >> age;
        v.push_back({ {fullName,nickName},age});
    }

    for(int i=0;i<n;i++)
        cout << v[i].first.first <<" " <<v[i].first.second <<" "<<v[i].second<<"\n";
}