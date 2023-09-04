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
const int N=2e5 + 5;
vector<pair<int,char> > idx(N);

int main()
{
    optimize();
    int t; cin >> t;
    int cnt = 1, l = 0, r = 0;
    while(t--) {
        char ch; int id;
        cin >> ch >> id;
        if(ch == '?') {
           if(idx[id].second == 'L') {
                ll mn = min((l - idx[id].first),(r + idx[id].first-1));
                cout << mn << '\n';
           }
           else {

             ll mn = min((l+idx[id].first-1),(r - idx[id].first));
            cout << mn << '\n';
           }
        }
        else {
            if(ch == 'L'){
                l++;
                idx[id].first = l;
                idx[id].second = ch;
            }
            else {
                r++;
                idx[id].first = r;
                idx[id].second = ch;
            }
        }
    }
}


