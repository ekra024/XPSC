#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
vector<ll>v, ans;

void tree(int i, int j, int depth)
{
    if(i > j) return;

    ll index, val = INT_MIN;

    for(int k = i; k <= j; k++) {
        if(v[k] >= val) {
            index = k;
            val = v[k];
        }
    }
    ans[index] = depth;
    tree(i, index-1, depth+1);
    tree(index+1, j, depth+1);

}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        v.resize(n);
        ans.resize(n);

        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        tree(0, n-1, 0);

        for(auto it : ans)
            cout << it << ' ';
        cout << '\n';
    }
}

