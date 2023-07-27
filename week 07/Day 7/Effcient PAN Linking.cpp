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
        string s; cin >> s;
        ll rem=0,sum = 0;

        for(int i = 0; i < s.size(); i++) {
            int b = s[i] - '0';
            sum = b + rem*10;
            if(sum < 0) {
                continue;
            }
            rem = sum % 20;
        }

        cout << rem << '\n';
    }
}


