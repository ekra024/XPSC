#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());

    int q; cin >> q;
    while(q--)
    {
        int type;
        int k;
        cin>> type >> k;
        if(type == 1){
            auto x = lower_bound(v.begin(),v.end(),k);
            if(x != v.end()){
                int idx = x - v.begin();
                int value = *x;
                cout <<idx <<" "<< value<<"\n";
            }
            else cout << "-1\n";
        }
        else{
            auto it = upper_bound(v.begin(),v.end(), k);
            if(it != v.end()){
                int idx = it - v.begin();
                int value = *it;
                cout <<idx <<" "<< value<<"\n";
            }
            else cout << "-1\n";
        }
    }
}
