#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, sz; cin >> n >> sz;
        vector<string>v;
        for(int i = 0; i < n; i++) {
            string s; cin >> s;
            v.push_back(s);
        }

        ll mncost = INT_MAX;


        for(int k = 0; k < n; k++) {
            for(int i = 0; i < n; i++) {
                ll cost = 0;
                string s1=v[i], s2 = v[k];
                if(k == i) continue;
                for(int j = 0; j < sz; j++) {
                    int a = s1[j] - 'a';
                    int b = s2[j] - 'a';
                    cost += abs(a-b);
                }

                mncost = min(mncost, cost);
            }
        }

        cout << mncost << '\n';
    }
}


