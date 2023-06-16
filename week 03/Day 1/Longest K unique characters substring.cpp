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
    string s;
    ll k; cin >> s >> k;

    ll i = 0, j = 0, n = s.size(), unq = 0, ans = -1;
    int frq[26] = {0};

    while(j < n) {
        char ch = s[j];
        if(frq[ch-'a'] == 0) unq++;
        frq[ch-'a']++;

        if(unq > k) {
            while(unq > k) {
                char left = s[i];
                frq[left - 'a']--;
                if(frq[left-'a'] == 0) unq--;
                i++;
            }
        }

        if(unq == k) ans = max(ans, j-i+1);
        j++;
    }

    cout << ans << '\n';
}


