#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int mod = 1e9 + 7;
const int N=1e5;
int hsh[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll>v(n);
        ll mx = INT_MIN;
        pair<ll, ll> mxElement;

        for(ll i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] > mx) {
                mxElement = make_pair(v[i], i);
                mx = v[i];
            }
        }

        ll idx1 = -1, idx2 =- 1;
        bool one = false, two = false;

        for(ll i = 0; i < n; i++) {
            if(v[i]==1 && two) {
                if(mxElement.second < i && mxElement.second > idx1) {
                    idx1 = mxElement.second+1;
                    idx2 = mxElement.second+1;
                }
                else if(mxElement.second>i && i > idx1) {
                    idx1 = i+1;
                    idx2 = mxElement.second + 1;
                }
                else if(mxElement.second < i && i > idx1) {
                    idx1 = idx1+1;
                    idx2 = mxElement.second + 1;
                }
            }
            else if(v[i]==2 && one) {
                if(mxElement.second < i && mxElement.second > idx1) {
                    idx1 = mxElement.second+1;
                    idx2 = mxElement.second+1;
                }
                else if(mxElement.second>i && i > idx1) {
                    idx1 = i+1;
                    idx2 = mxElement.second + 1;
                }
                else if(mxElement.second < i && i > idx1) {
                    idx1 = idx1+1;
                    idx2 = mxElement.second + 1;
                }
            }
            else if(v[i] == 1) {
                one = true; idx1 = i;
            }
            else if(v[i] == 2) {
                two = true; idx1 = i;
            }

        }

        cout << idx1 << ' ' << idx2 << '\n';
    }
}


