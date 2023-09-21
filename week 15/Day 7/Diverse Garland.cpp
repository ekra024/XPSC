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
    ll cnt = 0;

    for(int i = 0; i < n-1; i++) {
        if(i < n-2 && s[i] == s[i+1] && s[i+1] == s[i+2]) {
            if(s[i] == 'R') s[i+1] = 'B';
            else if(s[i] == 'B') s[i+1] = 'R';
            else s[i+1] = 'B';
            i++;
            cnt++;
        }
        else if(s[i]==s[i+1]) {
            cnt++;
            if(i == n-2) {
                if(s[i] == 'R') s[i+1] = 'B';
                else if(s[i] == 'B') s[i+1] = 'R';
                else s[i+1] = 'B';
            }
            else {
                if((s[i] == 'R' && s[i+2] == 'B')||(s[i] == 'B' && s[i+2] == 'R')) s[i+1] = 'G';
                else if((s[i] == 'R' && s[i+2] == 'G')||(s[i] == 'G' && s[i+2] == 'R')) s[i+1] = 'B';
                else if((s[i] == 'B' && s[i+2] == 'G')||(s[i] == 'G' && s[i+2] == 'B')) s[i+1] = 'R';

            }
        }
    }

    cout <<cnt << '\n'<< s << '\n';
}


