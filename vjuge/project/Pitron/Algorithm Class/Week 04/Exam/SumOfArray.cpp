#include<bits/stdc++.h>
using namespace std;

int SumOfArray(int a[], int n)
{
   if(n == 1) return a[0];
   return a[n-1]+SumOfArray(a,n-1);
}

int main()
{
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    cout << SumOfArray(a,n) << "\n";
}
