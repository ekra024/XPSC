#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=1e5;
int hsh[N];
int sum;

int SumOfDigit(string s)
{
    if(s.size() < 1) return sum;
    int n = s.size();
    sum += s.back() - '0';
    string str = s.substr(0, n-1);
    return SumOfDigit(str);
}

int main()
{
    optimize();
    string s; cin >> s;

    cout << SumOfDigit(s) << '\n';
}


