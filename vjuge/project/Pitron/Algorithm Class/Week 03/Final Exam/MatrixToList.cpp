#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int a; cin>>a;
            if(a==1){
                v[i].push_back(j);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<i<<": ";
        for(auto it:v[i])cout<<it<<" ";
        cout<<"\n";
    }
}
