#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p;
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        p.first = a[i];
        p.second = i;
    }

    sort(p.begin(),p.end());

    for (auto it: p)
        cout<<it<<" ";
    cout<<endl;
}
