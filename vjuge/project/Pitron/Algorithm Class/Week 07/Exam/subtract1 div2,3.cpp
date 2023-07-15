#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;

int Min_Op(int n)
{
    if(n == 1) return 0;
    int a = INT_MAX, b= INT_MAX, c = INT_MAX;


    if(n%2 == 0)
        a = Min_Op(n/2);
    if(n%3 == 0)
        b = Min_Op(n/3);
    c = Min_Op(n - 1);


    return 1 + min(a,min(b,c));
}

int main()
{
    int n; cin >> n;

    cout << Min_Op(n) << '\n';
}
