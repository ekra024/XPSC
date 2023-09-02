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
        int x;
        cin>>x;
        vector<int>ans;

        int now = 1;
        while(now <= x)
        {
            ans.push_back(now);
            now*=2;
        }

        if(ans.back()!=now)
        {
            int diff = x - ans.back();
            for(int i=31;i>=0;i--)
            {
                if(diff&(1<<i))
                {
                    ans.push_back(ans.back() + (1<<i));
                }
            }
        }

        cout<<ans.size()<<"\n";
        reverse(ans.begin(),ans.end());
        for(int i:ans)
            cout<<i<<" ";
        cout<<"\n";
    }
}
