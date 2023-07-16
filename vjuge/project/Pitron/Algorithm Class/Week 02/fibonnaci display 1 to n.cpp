#include<bits/stdc++.h>
using namespace std;

void fibo(int n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    int a = fibo(n-1) + fibo(n-2);

    cout<<a<<" ";
}

int main()
{
    int n;
    cin >> n;

    fibo(n);
}
