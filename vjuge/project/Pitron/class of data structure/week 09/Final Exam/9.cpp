#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int>m;
    map<string,int>p;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        if(m[s]>=1){
           cout<<p[s]<<"\n";
        }
        else cout<<"-1\n";
        m[s]++;
        p[s]=i;
    }


}

