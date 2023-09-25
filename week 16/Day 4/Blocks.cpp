#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) a/(b/__gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5 + 123;

int main()
{
    optimize();
    ll n; cin >> n;
    string s; cin >> s;
    vector<ll> ans;
    string temp = s;
    bool ok = true;
    for(ll i = 0; i < n; i++) {
        if(s[i] == 'W') continue;
        else {
            if(i < n-1 && s[i+1] == 'W') {
                s[i] = 'W'; s[i+1] = 'B';
                ans.push_back(i+1);
            }
            else if(i == n-1 && s[i] == 'B') {
                ok = false; break;
            }
            else if(i < n-1 && s[i+1] == 'B') {
                s[i] = 'W'; s[i+1] = 'W';
                ans.push_back(i+1);
            }
        }
    }

    if(!ok) {
        ok = true;
        ans.clear();
        string s = temp;
        for(ll i = 0; i < n; i++) {
            if(s[i] == 'B') continue;
            else {
                if(i < n-1 && s[i+1] == 'B') {
                    s[i] = 'B'; s[i+1] = 'W';
                    ans.push_back(i+1);
                }
                else if(i == n-1 && s[i] == 'W') {
                    ok = false; break;
                }
                else if(i < n-1 && s[i+1] == 'W') {
                    s[i] = 'B'; s[i+1] = 'B';
                    ans.push_back(i+1);
                }
            }
        }
    }

    if(ok) {
        cout << ans.size() << '\n';
        for(auto it : ans) cout << it << ' ';
        cout <<'\n';
    }
    else cout << -1 <<'\n';
}


