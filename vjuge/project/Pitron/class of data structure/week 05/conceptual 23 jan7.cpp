#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, vector<int> > mp;

    for(int i=0;i<s.size();i++)
    {
        mp[s[i]].push_back(i);
    }

    for(auto it:mp)
    {
        cout<<it.first<<" ";
        vector <int> v = it.second;
        for(auto val:v) 
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

}