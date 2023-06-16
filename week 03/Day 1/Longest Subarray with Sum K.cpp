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
    int n , k; cin >> n >> k;
    vector<int>v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    ll l = 0, r = 0, sum = 0;
    ll lngArray = 0;
    while(r < n) {
        if(sum == k) {
            lngArray = max(lngArray, (r-l));
            sum += v[r];
            r++;

        }
        else if(sum > k) {
            sum -= v[l];
            l++;
        }
        else {
            sum += v[r];
            r++;
        }
    }

    if(sum == k)
    lngArray = max(lngArray, (r-l));

    cout << lngArray << '\n';
}



