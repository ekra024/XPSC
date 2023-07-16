#include<bits/stdc++.h>
using namespace std;

long long int ara[101];

long long int fib(long long int n)
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
    cout << fib(10)<<'\n';
    cout << fib(20)<<'\n';
    cout << fib(8) << '\n';
    cout << fib(50) << '\n';
}
