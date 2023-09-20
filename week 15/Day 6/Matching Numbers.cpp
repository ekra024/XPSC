#include<bits/stdc++.h>
typedef long long int ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
using namespace std;

int main()
{
    optimize();
    ll t;cin>>t;
    while(t--){
        ll n; cin >> n;
        if(n%2) {
            cout << "Yes\n";
            vector<pair<int, int> > ans(n);
            int nxt = 2 * n;
            for(int i = 0; i < n; i++) {
                ans[i].second = nxt;
                nxt--;
            }
            nxt = 1;
            for(int i=0; i <= (n/2); i++) {
                ans[i].first = nxt;
                nxt += 2;
            }
            nxt = 2;
            for(int i=(n/2)+1; i < n;i++) {
                ans[i].first = nxt;
                nxt += 2;
            }
            for(auto it:ans){
                cout << it.first <<" "<< it.second <<"\n";
            }
        }
        else cout << "No\n";
    }
}

