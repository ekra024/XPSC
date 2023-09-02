#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e4 + 5;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        k%=(n+1);
        vector<int>a(n);
        vector<bool>vis(n+1);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            vis[a[i]] = 1;
        }

        int nai = -1;
        for(int i=0; i<=n; i++)
            if(vis[i]==0)
                nai = i;

        deque<int>dq(a.begin(),a.end());
        vector<int>all;

        for(int i=0; i<=n; i++)
        {
            all.push_back(dq.front());
            int val = nai;
            nai = dq.back();
            dq.pop_back();
            dq.push_front(val);
        }

        int idx = k;
        for(int i=0; i<n; i++)
        {
            cout<<all[idx]<<" ";
            idx--;
            if(idx<0)
                idx = all.size()-1;
        }
        cout<<"\n";

    }
}
