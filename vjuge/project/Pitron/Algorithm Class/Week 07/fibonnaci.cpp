#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll ara[101];

ll fib(ll n)
{
    if(n <= 2) return 1;
    if(ara[n] != 0) {
        return ara[n];
    }
    ara[n] = fib(n-1) + fib(n-2);
    return ara[n];
}

int main()
{
    cout << fib(3) << '\n';
    cout << fib(5) << '\n';
    cout << fib(6) << '\n';
    cout << fib(50) << '\n';
    cout << fib(30) << '\n';
}
