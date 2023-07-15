#include <bits/stdc++.h>
using namespace std;

int Count(int a[], int n, int k)
{
    sort(a,a+n);
    int b = 0, c, d;
    for (int i = 0; i < n - 1; i++)
    {
        int p = k-a[i];
        int c = lower_bound(a+i+1, a+n, p) - a;
        int d = upper_bound(a+i+1, a+n, p) - a;
        b = b + d - c;
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k;
    cin >> k;

    cout << Count(a, n, k);
    return 0;
}
