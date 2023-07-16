#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    for(int i = 2; i*i <= n; i++) {
        if(n%i == 0) return false;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int>v;


    v.push_back(2);
    for(int i = 2; i <= 1000; i++) {
        if(is_prime(i) ) {
            v.push_back(i);
        }
    }

    cout << v[n] << '\n';
}
