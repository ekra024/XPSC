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
    string s; cin >> s;
    map<char, int> mp;

    ll cnt = 0;

    for(int i = 0; i < s.size(); i++) {
        mp[s[i]] ++;
    }

    for(auto it : mp) {
        if(it.second%2)cnt++;
    }

    if(cnt== 1 && s.size()%2) {
        cout << "YES\n";
    }
    else if(cnt==0 && s.size()%2 == 0) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}


