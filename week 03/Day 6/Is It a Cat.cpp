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
        ll n, cnt = 0; cin >> n;
        string s, give = "meow";
        cin >> s;
        bool ok = true;

        for(int i = 0; i < n; i++) s[i] = tolower(s[i]);

        for(int i = 0; i < n; i++) {
            char ch = s[i];
           if(ch=='m'||ch=='e'||ch=='o'||ch=='w') {
                 ok = true;
           }
           else ok = false;
           if(s[i]!= s[i+1]) {
                if(ch == give[cnt]) cnt++;
                else{
                    ok = false;break;
                }
           }
        }

        if(cnt == 4 && ok) cout << "YES\n";
        else cout << "NO\n";
    }
}

