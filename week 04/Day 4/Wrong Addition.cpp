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
         ll a, s; cin >> a >> s;
        vector<int>b;
        bool ok = true;

        while(s){
            int num1 = a % 10;
            int num2 = s % 10;
            if(num1 <= num2) b.push_back(num2 - num1);
            else{
                s /= 10;
                num2 += 10 * (s % 10);
                int res = num2 - num1;
                if(num1 < num2 && num2 >= 10 && num2 <= 18) b.push_back(res);
                else{
                    ok = false;break;
                }
            }
            a /= 10;
            s /= 10;
        }

        if(a || ok == false) cout << -1 << '\n';
        else{
            while (b.back() == 0) b.pop_back();
            reverse(b.begin(), b.end());
            for(auto it : b) cout << it;
            cout << '\n';
        }
    }
}



